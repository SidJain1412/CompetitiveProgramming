/* Kefa hates coins and thinks that coins are a currency of the poor.

She has N coins with her, ith of them having the value Ai.
She goes to a shop to buy M gifts, with the price of ith gift being Pi.

She wants to get rid of as many coins as she can and she buys the gift one by one from the 1st one to the Mth one. She adopts the following strategy while buying any particular gift i : She wants to give the shopkeeper a total of X coins whose value sum up to K such that -

K = Pi
X is maximized
K - Pi is minimized

She does not consider other gifts while buying a particular gift i.e. while buying every gift she tries her best to satisfy the above conditions for that gift.

Your task is, given the array A and the array P, for every gift, find and print the values of X and K, or print -1 -1 if she will not be able to buy the gift at all.

INPUT
First line contains two numbers N and M.
Second line contains the array A of size N.
Third line contains the array P of size M.

INPUT
Print M lines of output, for every gift two integers on a new line.
The two integers should denote the values of X and K while buying that gift optimally.
If it is not possible to buy a particular gift with available coins, print "-1 -1"

CONSTRAINTS
1 = N, M = 105
1 = Ai, Pi = 105

Sample Input 0

10 5
1 2 3 4 5 1 2 3 4 5
6
6
6
6
6
Sample Output 0

4 6
2 6
2 8
2 10
-1 -1 */



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, m;
    cin>>n>>m;
    int a[n], p[m], i, j, count=0;
    for(i = 0;i < n; i++)
    {
        cin>>a[i];
        count = count+a[i];
    }
    for(i = 0;i < m; i++)
        cin>>p[i];
    sort(a, a+n);
    int pos = 0;
    for(i = 0; i < m; i++)
    {
        int x = 0,flag = 0,j = pos,c = 0;
        while(j<n)
        {
            x = x + a[j];
            c++;
            if(x >= p[i])
            {
                pos = j + 1;
                flag = 1;
                break;
            }
            j++;
        }
        if(flag == 1)
        {
            cout<<c<<" "<<x<<endl;
        }
        else
        {
            cout<<"-1 -1"<<endl;
        }
    }
    return 0;
}
