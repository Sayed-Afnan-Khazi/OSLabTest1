#!/bin/zsh

# This script prints the multiplication table of a given number

N=$1

for (( i=1; i<=10; i++ ))
do
    echo "$N x $i = $((N*i))"
done