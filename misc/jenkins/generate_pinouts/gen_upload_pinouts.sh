#!/bin/bash

CONNECTORS=$(find -path "./firmware/config/boards/*/connectors/*.yaml")
for c in $CONNECTORS; do
  echo "processing "$c
  DIR="pinouts/"$(echo $c | tr '/' '\n' | tail -n +5 | head -n -2 | tr '\n' '/')
  echo "DIR "$DIR
  NAME=$(basename $c .yaml)
  echo "NAME "$NAME
  mkdir -p $DIR
  bash misc/pinout-gen/gen.sh $c > $DIR/$NAME.html
  file $DIR/$NAME.html
  IMG=$(yq r $c 'info.image.file')
  echo "IMG "$IMG
  if [ $IMG ]; then
    cp $(dirname $c)/$IMG $DIR
  fi
  ls $DIR
  cp misc/pinout-gen/yaml.min.js $DIR
  ls $DIR
done

if [ -n "$RUSEFI_FTP_SERVER" ]; then
  echo "Uploading Pinouts"
  ncftpput -R -m -u "$RUSEFI_DOXYGEN_FTP_USER" -p "$RUSEFI_DOXYGEN_FTP_PASS" "$RUSEFI_FTP_SERVER" /pinouts pinouts/*
fi
[ $? -eq 0 ] || { echo "upload FAILED"; exit 1; }
