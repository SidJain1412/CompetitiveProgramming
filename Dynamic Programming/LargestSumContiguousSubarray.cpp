// Largest Sum Contiguous Subarray

// Write an efficient program to find the sum of contiguous subarray within a one-dimensional array of numbers which has the largest sum.

// Sample Input:
// 6
// 1 -2 1 1 -2 1

// Output:
// 2

#include <bits/stdc++.h>
using namespace std;

int maxSubsetSum(vector<int> arr) 
{
    int i, n = arr.size();
    int max_ending_here = arr[0];
    int global_max = arr[0];
    for(i=1;i<n;i++)
    {
        max_ending_here = max(arr[i], max_ending_here + arr[i]);
        if(max_ending_here > global_max)
            global_max = max_ending_here;
    }
    return global_max;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin>>j;
        arr.push_back(j);
    }
    int res = maxSubsetSum(arr);
    cout << res << "\n";
    return 0;
}