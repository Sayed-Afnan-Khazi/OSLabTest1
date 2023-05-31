#!/bin/zsh

START=$1
END=$2

if [ $END -gt $START ]
then
    for ((i=START;i<=END;i++))
    do
        echo $i
    done
else
    for ((i=END;i>=START;i--))
    do
        echo $i
    done
fi