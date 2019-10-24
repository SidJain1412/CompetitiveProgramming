// Largest Sum Contiguous Subarray

// Write an efficient program to find the sum of contiguous subarray within a one-dimensional array of numbers which has the largest sum.

#include <iostream>
using namespace std;

int kadaneAlgo(int arr[], int n)
{
    int globalMax,maxEndingHere,i;
    globalMax = arr[0];
    maxEndingHere = arr[0];
    for(i=1;i<n;i++)
    {
        maxEndingHere = max(maxEndingHere + arr[i], arr[i]);
        if(maxEndingHere > globalMax)
            globalMax = maxEndingHere;
    }
    return globalMax;
}

int main() 
{
    int arr[] = {1, 3, -4, 2, 1, -1, 3, -5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = kadaneAlgo(arr, n);
    
    cout<<"Max subarray sum = "<<result<<endl;
}
