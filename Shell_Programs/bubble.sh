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
for((j=0; $j<$n; j++))
do
   if [ $(( arr[$i] )) -lt $(( arr[$j] )) ]
   then
   {
    temp=$(( arr[$j] ))
    arr[$j]=$(( arr[$i] ))
    arr[$i]=$temp
   }
fi
done
done
echo "Sorted array:"
for((i=0; $i<$n; i++))
do
echo $(( arr[$i] ))
done
