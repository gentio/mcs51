#!/bin/sh
for i in "$@"
do
    sdcc -c $i
done

