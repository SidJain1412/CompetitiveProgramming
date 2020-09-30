// Find the subarray with least average

// Given an array arr[] of size n and integer k such that k <= n.

#include <iostream>
#include <climits>
using namespace std;

int minAverage(int arr[], int n, int k)
{
    int i, j, min=INT_MAX;
    for(i=0;i<n-k;i++)
    {
        int sum = 0;
        for(j=0;j<k;j++)
            sum+=arr[i+j];
        cout<<i<<"th iter, sum = "<<sum<<endl;
        if(sum<min)
            min = sum;
    }
    return min/k;
}

int main() 
{
    int arr[] = {3, 7, 90, 20, 10, 50, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int result = minAverage(arr, n, k);
    
    cout<<"Min subarray average = "<<result<<endl;
}