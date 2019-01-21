/*You are given an array A[N] of size N.
We define a 7-Divisible Pair as a pair of integers (i,j) such that Ai + Aj is divisible by 7.
Formally, a pair of integers (i,j) is a 7-Divisible pair if ( Ai + Aj ) % 7 = 0.
Your task is to find the total number of 7-Divisible pairs from the given array.

INPUT

First line contains N the size of the array. (1 ≤ N ≤ 105).
Second line contains the array elements that all lie between 1 and 105.

OUTPUT

Output a single integer that denotes the number of pairs divisible by 7.

Sample Input 0

5
9 3 7 4 14

Sample Output 0

2

*/

#include <iostream>
using namespace std;


int main(){
    unsigned int n,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    for(int i=0;i<n;i++){
        if(a[i]%7==0)
            count1++;
        else if(a[i]%7==1)
            count2++;
        else if(a[i]%7==2)
            count3++;
        else if(a[i]%7==3)
            count4++;
        else if(a[i]%7==4)
            count5++;
        else if(a[i]%7==5)
            count6++;
        else if(a[i]%7==6)
            count7++;
            
        }
   // cout<<count6<<" "<<count7<<" "<<count5<<" "<<count4<<" "<<count3<<" "<<count2<<" ";
    unsigned int sum = count2*count7 + count3*count6 + count4*count5 + (count1*(count1-1))/2;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cout<<sum;
    return 0;
}
