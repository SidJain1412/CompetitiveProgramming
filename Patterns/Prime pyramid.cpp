// Prime Series

// Identify and print the following pattern generated by prime numbers for a given N.

// N = 1
// 2

// N = 2
// 2
// 3 5

// N = 3
// 2
// 3 5
// 7 11 13
// Input
// Input consists of a single integer N

// Output
// Output must consists of the pattern as shown above.

// Sample Input 0

// 3
// Sample Output 0

// 2
// 3 5
// 7 11 13

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i=0,prime=2,j,flag;
    cin>>n;
    int total=(n*(n+1))/2;
    int arr[total];
    arr[i++]=2;
    while(i!=total)
    {
        prime++;
        flag=1;
        for(j=2;j<=sqrt(prime);j++)
        {
            if(prime%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            arr[i++]=prime;
            continue;
        }
    }
    int k=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            cout<<arr[k++]<<" ";
        cout<<endl;
    }
    return 0;
}

