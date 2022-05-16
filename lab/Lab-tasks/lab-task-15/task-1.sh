#!/bin/bash

touch newfile.cpp

cp code.cpp newfile.cpp


echo "Enter any number $n"

read n


if [ $n -eq 1 ]
then

g++ newfile.cpp


elif [ $n -eq 2 ]
then

g++ newfile.cpp
./a.out


elif [ $n -eq 3 ]
then

cat code.cpp

fi



