// Date Sorting 

// Sort the given dates of the format
// DD MM YYYY 
// in ascending order

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,j;
    cin>>n;
    int d[n],m[n],y[n];
    for(i=0;i<n;i++)
        cin>>d[i]>>m[i]>>y[i];
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(y[j]>y[j+1])
            {
                swap(y[j],y[j+1]);
                swap(m[j],m[j+1]);
                swap(d[j],d[j+1]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(y[i]==y[j] && m[j]>m[i])
            {
                swap(m[i],m[j]);
                swap(d[i],d[j]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(y[i]==y[j] && m[j]==m[i] && d[j]>d[i])
            {
                swap(d[i],d[j]);
            }
        }
    }
    // for(i=0;i<n-1;i++)
    // {
    //     if(y[i]==y[i+1])
    //     {
    //         swap(m[i],m[i+1]);
    //         swap(d[i],d[i+1]);
    //     }
    // }
    // for(i=0;i<n-1;i++)
    // {
    //     for(j=0;j<n;j++)
    //     {
    //         if(y[i]==y[i+1] && m[i]==m[i+1])
    //         {
    //             swap(d[i],d[i+1]);
    //         }
    //     }
    // }
    for(i=0;i<n;i++)
        cout<<d[i]<<" "<<m[i]<<" "<<y[i]<<endl;    
    
    return 0;
}

