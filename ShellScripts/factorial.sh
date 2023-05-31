#!/bin/zsh

N=$1
FACT=1
for ((i=2;i<=N;i++))
do
    FACT=$((FACT*i))
done

echo "FACTORIAL = $FACT"