#!/bin/zsh

# This is a simple calculator program
A=$1
B=$2

echo "ADDITION: $((A+B))"
echo "SUBTRACTION: $((A-B))"
echo "MULTIPLICATION: $((A*B))"
echo "DIVISION: $((A/B))"
echo "MODULUS: $((A%B))"
echo "EXPONENT: $((A**B))"
echo "SQUARE ROOT: $((A**(1/2)))"

