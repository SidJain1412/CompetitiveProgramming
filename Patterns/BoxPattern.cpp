// Forming Numericals

// Print the following pattern :

// N = 1
// 1

// N = 2
// 2 2 2
// 2 1 2
// 2 2 2

// N = 3

// 3 3 3 3 3
// 3 2 2 2 3
// 3 2 1 2 3
// 3 2 2 2 3
// 3 3 3 3 3

// and so on.
// Input Format

// One number N

// Constraints

// 1 <= N <= 10

// Output Format

// The pattern

// Sample Input 0

// 2
// Sample Output 0

// 2 2 2
// 2 1 2
// 2 2 2

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int i,j,k,x,g,z,u,a,e,b,ct=0,q;
    u=n;
    int s=n;
    int l=n;
    z=1;
    for(i=1;i<=n;i++)
    {
        s=n;
        for(j=1;j<=i;j++)
        {
            cout<<s--<<" ";
        }
        for(j=u-1;j>0;j--)
        {
            cout<<u<<" ";
        }
        u--;
        for(j=n-1;j>i;j--)
            cout<<l<<" ";
        l--;
        
        a=n-i+1;
        for(j=0;j<i;j++){
            if(a==1){
                for(q=2;q<=n;q++)
                    cout<<q<<" ";
                break;
            }
            else
                cout<<a++<<" ";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            cout<<j<<" ";
        }
        
        z++;
        for(g=1;g<=i*2-1;g++){
            if(i==n)
                break;
            cout<<z<<" ";
        }
        
        for(j=i+1;j<=n;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
        
    return 0;
}