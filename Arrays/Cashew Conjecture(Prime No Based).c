/*Dr. Cashew is interested in prime numbers. One day she came across the Goldbach conjecture. 
It states that every even integer greater than 2 can be expressed as the sum of two primes. 
Now since she had to present a paper for the Stark Auto Expo and had done nothing so far, she got really desperate. 
She decided to invent a conjecture of her own and call it the Cashew Conjecture. 
Since Dr. Cashew is interested only in prime numbers, the Cashew Conjecture states that : 
At least k prime numbers from 2 to n inclusively can be expressed as the sum of three integer numbers: two neighboring prime numbers and 1. 
For example, 19 = 7 + 11 + 1, or 13 = 5 + 7 + 1. 


Two prime numbers are called neighboring if there are no other prime numbers between them. 
You are to help the noob Pomal, and find out if she is right or wrong. 
Input
The first line of the input contains two integers n (2<=n<=1000) and k (0<=k<=1000). 
Output
Output YES if at least k prime numbers from 2 to n inclusively can be expressed as it was described above. 
Otherwise output NO.

Example
Input-1: 
27 2 
Output-1: 
YES 
Input-2: 
45 7 
Output-2: 
NO 
Explanation
Example case 1. First answer is YES since there are two numbers which can be expressed as given above. 
Say, 13 and 19.

Example case 2. Second answer is NO since there is no way to express 7 prime numbers from 2 to 45 in the given form.

Sample Input 0

2 0
Sample Output 0

YES*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int isprime(int x)
{
    if(x==0 || x==2 || x==3)
        return x;
    if(x%2==0 || x%3==0)
        return 0;
    int i=5;
    while(i<=sqrt(x))
    {
        if(x%i==0 || x%(i+2)==0)
            return 0;
        i+=6;
    }
    return 1;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k;
    cin>>n>>k;
    if(n==2)
    {
        if(k==0)
        {
            cout<<"YES";
            return 0;
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    int arr[100000],i=1,j;
    arr[0]=2;
    for(int j=3;j<=n;j++)
        if(isprime(j))
            arr[i++]=j;
    
    int sum,count=0;
    int max=arr[i-1];
    for(j=0;j<i-1;j++)
    {
        sum= 1+(arr[j]+arr[j+1]);
        if((sum%2!=0) && sum<=max)
        {
            for(int x=0;x<i;x++)
            {
                if(sum==arr[x])
                {
                    count++;
                    break;
                }
            }
        }
    }
    if(count>=k)
        cout<<"YES";
    else 
        cout<<"NO";
    return 0;
}
