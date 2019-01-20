// You are given N queries:-
// 1. X- Push the element X at top of the stack
// 2. Delete the element at top of the stack
// 3. Print the maximum element of the stack

// Input Format:- 
// N, N lines  follows each query

// Output format:- 
// Print max element for each query of type 3

// Sample Input 0

// 10
// 1 97
// 2
// 1 20
// 2
// 1 26
// 1 20
// 2
// 3
// 1 91
// 3
// Sample Output 0

// 26
// 91

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,x,r;
    int a[100000],at=-1,b[100000],bt=-1;
    scanf("%d",&n);
    
    while(n--)
    {
      scanf("%d",&x);
        
        switch(x)
        {
            case 1: scanf("%d",&a[++at]);
                if(bt==-1 || b[bt]<=a[at])
                    b[++bt]=a[at];
                break;
            case 2:
                if(a[at--]==b[bt]) bt--;
                break;
            case 3:
                printf("%d\n",b[bt]);
        }
    }
    return 0;
}
