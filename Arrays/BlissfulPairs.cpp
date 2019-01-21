/*Given a permutation of number from 1 to N. Among all the subarrays, find the number of unique pairs (a,b) such that a≠b and a is maximum and b is second maximum in that subarray.

Input Format

First line contains an integer, N.
Second line contains N space separated distinct integers, Ai, denoting the permutation.

Constraints

1≤N≤10^5
1≤Ai≤N

Output Format

Print the required answer.

Sample Input 0

5
1 2 3 4 5

Sample Output 0

4

Explanation 0

All possible subarrays are :
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
2
2 3
2 3 4
2 3 4 5
3
3 4
3 4 5
4
4 5
5

The 4 unique pairs are :
(2, 1)
(3, 2)
(4, 3)
(5, 4) */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        int max=0;
        
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                count++;
                break;
            }
            
            else if(a[i]>a[j] && a[j]>max)
            {
                max=a[j];
                count++;
            }
            else continue;
        }
    }
    
    cout<<count<<endl;
    
    return 0;
}

