#!/bin/bash

touch newfile.cpp

cp code.cpp newfile.cpp


echo "Enter any number $n"

read n

 

case $d in
1) g++ newfile.cpp;;
2) g++ newfile.cpp && ./a.out;;
3) cat code.cpp;;
*) ls;;

esac