// Bug's friends play Secret Santa. He has n friends. Lets number them from 1 to n. 
// For each friend i he knows pi, the person that i gave a gift to. 
// Bug needs to find out ri for each friend i, which is the person that i received a gift from.

// Input Format

// First line contains one number n. Second line contains n space separated integers.

// Constraints

// 1 <= n <= 100

// Output Format

// Print n space-separated integers: the i-th number should equal the number of the friend who gave a gift to friend number i.

// Sample Input:

// 4
// 2 3 4 1

// Sample Output:

// 4 1 2 3 

// Explanation:
// Ouput is

// 4 : because 1 received a gift from 4

// 1 : because 2 received a gift from 1

// 2 : because 3 received a gift from 2

// 3 : because 4 received a gift from 3


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], b[n];
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        int x= arr[i];
        b[x-1]= i+1;
    }
    for(int i=0; i<n;i++)
        printf("%d ", b[i]);   
    return 0;
}
