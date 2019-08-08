// Maximum size square sub-matrix with all 1s

// Given a binary matrix, find out the maximum size square sub-matrix with all 1s.

// Sample Input:

// 4 5
// 0 0 1 1 1
// 1 0 1 1 1
// 0 1 1 1 1
// 1 0 1 1 1 

// Sample Output:

// 3


// Code:

#include <iostream>
using namespace std;

int main()
{
    int m,n,i,j,max_len=-1;
    cin>>m>>n;
    int arr[m][n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin>>arr[i][j];
    
    // Forming the substructure
    int sub[m+1][n+1];
    for(i=0;i<m+1;i++)
    {
        for(j=0;j<n+1;j++)
        {
            if(i==0 || j==0)
                sub[i][j] = 0;
            else
                sub[i][j] = arr[i-1][j-1];
        }
    }
    
    for(i=1;i<m+1;i++)
    {
        for(j=1;j<n+1;j++)
        {
            if(sub[i][j]==1)
                sub[i][j] = 1 + min(sub[i-1][j], min(sub[i][j-1], sub[i-1][j-1]));
            else
                sub[i][j]=0;
            max_len = max(sub[i][j], max_len);
        }
    }
    
    // Printing the substructure
    for(i=0;i<m+1;i++)
    {
        for(j=0;j<n+1;j++)
            cout<<sub[i][j]<<" ";
        cout<<endl;
    }
    
    cout<<max_len;

    return 0;
}
