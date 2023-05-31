#!/bin/zsh

# This script prints the first n numbers of the fibonnaci sequence

N=$1
FIRST=0
SECOND=1

for (( i=0; i<N; i++ ))
do
    if [ $i -eq 0 ]
    then
        echo 0
    elif [ $i -eq 1 ]
    then
        echo 1
    else
        THIRD=$((FIRST+SECOND))
        echo $THIRD
        FIRST=$SECOND
        SECOND=$THIRD
    fi
done
