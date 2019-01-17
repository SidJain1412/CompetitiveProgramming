// Pascal and His Triangle

// Pascal's Triangle in Mathematics is the following pattern :

// 1
// 1 1
// 1 2 1
// 1 3 3 1
// and so on
// For Cth element in row R, it is equal to the sum of elements C and C-1 in row R-1.
// The first and the last elements of every row are always 1.

// Your task is given a number K, print the first K rows of the pascals triangle.

// Input Format

// Only one integer, the value of K.

// Constraints

// 1 <= K <= 50

// Output Format

// Output K lines, the first K rows of the pascal's triangle.

// Sample Input 0

// 4
// Sample Output 0

// 1
// 1 1
// 1 2 1
// 1 3 3 1

#include <iostream>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j;
    cin>>n;
    long long int a[n+1][n+1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1||j==i)
            {
                a[i][j]=1;
                cout<<a[i][j]<<" ";
            }
            else
            {
                a[i][j]=a[i-1][j-1]+a[i-1][j];
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}