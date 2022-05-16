#!/bin/bash


echo "Enter a number you want to find the factorila"
read n

f=1

for((i=2;i<=n;i++))
{
  f=$((f * i))  #fact = fact * i
}

echo $f

