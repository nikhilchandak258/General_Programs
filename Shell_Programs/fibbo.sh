#!/bin/bash
echo "Enter no"
read n
i=0
j=1
echo "$i"
echo "$j"
while (( c<=$n ))
do
c=$(($i+$j))
echo "$c"
i=$j
j=$c
done


