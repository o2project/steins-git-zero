FROM ubuntu:latest
MAINTAINER kubosho

# setup
RUN apt-get update && apt-get install -y locales git-core curl
RUN echo "en_US.UTF-8 UTF-8" >> /etc/locale.gen
RUN locale-gen en_US.UTF-8 && update-locale en_US.UTF-8

# install Re:VIEW environment
RUN apt-get install -y --no-install-recommends \
    texlive-lang-japanese texlive-fonts-recommended texlive-latex-extra lmodern fonts-lmodern tex-gyre fonts-texgyre texlive-pictures \
    ghostscript gsfonts zip ruby-zip ruby-nokogiri mecab ruby-mecab mecab-ipadic-utf8 poppler-data && \
    apt-get clean

# setup Re:VIEW
RUN curl -L https://raw.githubusercontent.com/rubygems/rubygems/master/lib/rubygems/ssl_certs/index.rubygems.org/GlobalSignRootCA.pem > /usr/lib/ruby/2.3.0/rubygems/ssl_certs/GlobalSignRootCA.pem
RUN gem install review review-peg bundler rake --no-rdoc --no-ri

# install RedPen
RUN apt-get install -y --no-install-recommends openjdk-8-jdk jq
COPY bin/setup-redpen.sh /tmp
RUN chmod +x /tmp/setup-redpen.sh && \
    ./tmp/setup-redpen.sh && \
    ln -s /redpen-distribution-*/bin/redpen /usr/local/bin/redpen
