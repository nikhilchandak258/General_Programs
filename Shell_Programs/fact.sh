#!/bin/bash

function fact()
{
a=$1
x=1;
for (( i=$a; $i>0; i-- ))
do
x=$(($x*$i))
done
echo "Factorial of $a is $x"
}
echo "Enter no"
read n
fact $n



