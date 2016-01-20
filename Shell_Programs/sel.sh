#!/bin/bash 
echo "Enter no. of elements:"
read n
echo "Enter elements:"
for((i=0; $i<$n; i++))
do
read arr[i]
done

for((i=0; $i<$n; i++))
do
low=$(( arr[$i] ))
for((j=i; $j<$n; j++))
do
   if [ $low -gt $(( arr[$j] )) ]
   then
   {
    low=$(( arr[$j] ))
    arr[$j]=$(( arr[$i] ))
    arr[$i]=$low
   }
fi
done
done
echo "Sorted array:"
for((i=0; $i<$n; i++))
do
echo $(( arr[$i] ))
done
