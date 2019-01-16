// Given a string, reverse only vowels in it. Leave the remaining string as it is.

// Input Format
// One string.

// Constraints
// 1 <= Length of string <= 10^5

// Output Format
// One string, the original string with vowels reversed.

// Sample Input 

// trumpisshit

// Sample Output 

// trimpisshut

// Explanation 
// vowels occur in the following order : u, i, i. they are reversed to occur in this order : i, i, u.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    char ch[100000];
    int a[100000][2],j=0,i,k,temp;
    cin>>ch;
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' || ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U')
        {
            a[j][0]=ch[i];
            a[j][1]=i;
            j++;
        }
    }
    for(i=0,k=j-1;i<j/2;i++,k--)
    {
        temp=a[i][0];
        a[i][0]=a[k][0];
        a[k][0]=temp;
    }
    for(i=0;i<j;i++)
        ch[a[i][1]]=a[i][0];
    cout<<ch;
    return 0;
}
