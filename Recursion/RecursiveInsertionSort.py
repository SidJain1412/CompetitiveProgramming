#Problem Name
## Sorting array using recursion

#Problem Description
## The problem is sorting an array using recursion.

#INPUT:
## an unsorted array.

#OUTPUT:
## Sorted array

#CONSTRAINTS:
## Recursive inseration sort gives complexity of O(n^2) which is not efficient as compared to merge sort 0(nlogn)

#Sample input:
## [12,11,13,5,6]
#Sample output:
## [6,5,11,12,13]

arr = [12,11,13,5,6]
n = len(arr)
insertionSortRecursive(arr, n)
printArray(arr, n)

def insertionSortRecursive(arr,n):
    if n<=1:
        return
    # Sort first n-1 elements 
    insertionSortRecursive(arr,n-1)
    last = arr[n-1]
    j = n-2
    
    # Move elements of arr[0..i-1], that are 
    # greater than key, to one position ahead 
    # of their current position  
    while (j>=0 and arr[j]>last):
        arr[j+1] = arr[j]
        j = j-1
    arr[j+1]=last
     
# a function that prints array of certain size
def printArray(arr,n):
    for i in range(n):
        print arr[i],
