// Happy Sighting

// There are n pictures delivered for the new exhibition. The i-th painting has beauty ai. We know that a visitor becomes happy every time he passes from a painting to a more beautiful one.

// We are allowed to arranged pictures in any order. What is the maximum possible number of times the visitor may become happy while passing all pictures from first to last. In other words, we are allowed to rearrange elements of array a in any order. What is the maximum possible number of indices i (1 <= i <= n - 1), such that ai + 1 > ai.

// Input Format

// The first line of the input contains integer n — the number of painting.

// The second line contains the sequence a1, a2, ..., an, where ai means the beauty of the i-th painting.

// Constraints

// 1 <= n <= 1000
// 1 <= ai <= 1000

// Output Format

// Print one integer — the maximum possible number of neighbouring pairs, such that ai + 1 > ai, after the optimal rearrangement.

// Sample Input 0

// 4
// 200 100 100 200
// Sample Output 0

// 2
// Explanation 0

// Sample Ordering that gives answer 2 :

// 100 200 100 200


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,x,freq[1005]={0},count=0,ans;
    cin>>n;
    int arr[n]={0};
    for (i=1;i<=n;i++)
    {
        cin>>x;
        arr[i]=x;
        freq[x]++;
    }
    while(1)
    {
        if(n==0) 
            break;
        count=0;
        for(i=1;i<=1000;i++) 
        {
            if(freq[i]!=0)
            {
                count++;
                freq[i]--;
                n--;
            }
        }
        ans+=count-1;
    }
    cout<<ans;
    return 0;
}