#!/bin/bash

URL=https://api.github.com/repos/redpen-cc/redpen/releases/latest
TEMP_JSON=redpen.json

curl -s $URL > $TEMP_JSON

FILE_NAME=`cat $TEMP_JSON | jq -r ".assets[] | select (.name | test(\"${spruce_type}\")) | .name"`
DOWNLOAD_URL=`cat $TEMP_JSON | jq -r ".assets[] | select (.name | test(\"${spruce_type}\")) | .browser_download_url"`

curl -OL $DOWNLOAD_URL
tar xvf $FILE_NAME
rm $FILE_NAME $TEMP_JSON
