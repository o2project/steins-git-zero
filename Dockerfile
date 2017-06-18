FROM ubuntu:latest
MAINTAINER kubosho

# setup
RUN apt-get clean && \
    apt-get update && \
    apt-get install -y locales git-core curl
RUN echo "en_US.UTF-8 UTF-8" >> /etc/locale.gen
RUN locale-gen en_US.UTF-8 && update-locale en_US.UTF-8

# install Re:VIEW
RUN apt-get install -y --no-install-recommends \
    texlive-lang-japanese texlive-fonts-recommended texlive-latex-extra lmodern fonts-lmodern tex-gyre fonts-texgyre texlive-pictures \
    ghostscript gsfonts zip ruby-zip ruby-nokogiri mecab ruby-mecab mecab-ipadic-utf8 poppler-data
RUN gem install review review-peg bundler rake --no-rdoc --no-ri

# install RedPen
RUN apt-get install -y --no-install-recommends openjdk-8-jdk jq
COPY bin/setup-redpen.sh /tmp
RUN chmod +x /tmp/setup-redpen.sh && \
    ./tmp/setup-redpen.sh && \
    ln -s /redpen-distribution-*/bin/redpen /usr/local/bin/redpen

# install Nginx
RUN curl http://nginx.org/keys/nginx_signing.key | apt-key add - && \
    sh -c "echo 'deb http://nginx.org/packages/ubuntu/ trusty nginx' >> /etc/apt/sources.list" && \
    sh -c "echo 'deb-src http://nginx.org/packages/ubuntu/ trusty nginx' >> /etc/apt/sources.list" && \
    apt-get update && \
    apt-get install -y nginx

# setup Nginx
COPY config/nginx/nginx.conf /etc/nginx/conf.d/review-preview.conf
EXPOSE 80
STOPSIGNAL SIGTERM
CMD ["nginx", "-g", "daemon off;"]
