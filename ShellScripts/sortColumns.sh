#!/bin/zsh

cat $1

echo "\nSorting by the first column"
sort -k1 $1

echo "Sorting by the second column"
sort -k2 $1

echo "Sorting by the third column"
sort -k3 $1
