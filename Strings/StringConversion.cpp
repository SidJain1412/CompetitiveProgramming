// String Conversion

// The string "GOTISPATHETIC" is written in a zigzag pattern on a given number of rows like this:

// G---S---H---C-
// -O-I-P-T-E-I--
// --T---A---T---
// And then read line by line: GSHCOIPTEITAT

// Write the code that will take a string and make this conversion given a number of rows.

// Input Format

// One string and one integer- the number of rows.

// Output Format

// One string

// Sample Input 0

// GOTISPATHETIC
// 3
// Sample Output 0

// GSHCOIPTEITAT

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,n,l,row=0,direction=0;
    string str;
    cin>>str;
    cin>>n;
    string a[n];
    l=str.length();
    for(i=0;i<l;i++)
    {
        a[row]=a[row]+(str[i]);
        if(row==n-1)
            direction=-1;
        else if(row==0)
            direction=1;
        
        if(direction==1)
            row++;
        else if(direction==-1)
            row--;
    }
    for(i=0;i<n;i++)
        cout<<a[i];

     
    return 0;
}
