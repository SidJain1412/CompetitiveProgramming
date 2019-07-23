// 0/1 Knapsack

// Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the 
// knapsack. In other words, given two integer arrays val[0..n-1] and wt[0..n-1] which represent values and weights 
// associated with n items respectively. Also given an integer W which represents knapsack capacity, find out the maximum 
// value subset of val[] such that sum of the weights of this subset is smaller than or equal to W. You cannot break an 
// item, either pick the complete item, or don’t pick it (0-1 property).

#include <iostream>
using namespace std;

int max(int a, int b)
{
    return a>b?a:b;
}

int ZeroOneKnapsack(int W, int val[], int wt[], int n)
{
    if(n==0 || W==0)
        return 0;
    int i,j;
    int k[n+1][W+1];
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=W;j++)
        {
            if(i==0 || j==0)
                k[i][j]=0;
            else if (j>=wt[i-1])
                k[i][j] = max(val[i]+k[i-1][j-wt[i]], k[i-1][j]);
            else
                k[i][j] = k[i-1][j];
        }
    }
    return k[n][W];   
}

int main()
{
    int val[] = {60, 100, 120}; 
    int wt[] = {10, 20, 30}; 
    int  W = 50; 
    int n = sizeof(val)/sizeof(val[0]); 
    cout << ZeroOneKnapsack(W, val, wt, n); 
    return 0;
}