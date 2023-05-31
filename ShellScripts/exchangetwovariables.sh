#!/bin/zsh

# Getting the variables from the command line arguements
A=$1
B=$2

# Swapping the variables
C=$A
A=$B
B=$C

# Echoing the results
echo "A=$A"
echo "B=$B"