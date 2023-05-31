#!/bin/zsh

if [ $1 -ge $2 ]
then
    echo "$1>$2"
else
    echo "$2>$1"
fi