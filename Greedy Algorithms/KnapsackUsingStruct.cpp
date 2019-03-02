/*You are given an empty bag that is supposed to be filled with gold, and it can carry at max W kgs of gold in it.

You are given N samples of gold, with the ith of them weighing Wi and having value Vi.

Your task is to fill the bag with exactly W kgs of gold such that the total value of the gold inside the bag is maximum.

You need not take the entire samples of gold, you can break them down and take fractions of those samples as well. 
For example, if you have two samples, one with weight 10 and value 10 and another with weight 5 and value 10, 
you can fill a 5 kg capacity bag with 2.5 kg of first sample and 2.5 kg of second sample. 
The value for such a bag will be the sum of values of all the pieces, i.e. for the first sample 2.5 kg has value 2.5 
and for the second sample 2.5 kg has value 5, hence the total value of the bag becomes 7.5

INPUT
First line contains two integers, N and W. 
Second onwards, there are N lines with each of them containing two integers, 
first one being the weight of the sample and the second one being the value of the sample

OUTPUT
Print one number, the maximum attainable value when the bag is filled with W kgs of gold. 
If it is not possible to fill the bag with W kgs of gold, print -1.

CONSTRAINTS
1 ≤ N ≤ 105 
1 ≤ W ≤ 109 
1 ≤ weights, values ≤ 109 

Sample Input 0

3 10
5 5
3 10
4 4
Sample Output 0

17.000000000000
Explanation 0

We can take 3 kgs of sample 2, 4 kgs of sample 1 and 3 kgs of sample 3 to attain the maximum value*/





#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

struct bag
{
    long wgt,val;
    double frac;
};
bool compare(bag a,bag b)
{
    return a.frac>b.frac;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long n,w,i;
    cin>>n>>w;
    bag a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i].wgt>>a[i].val;
        a[i].frac=(double)a[i].val/a[i].wgt;
    }
    sort(a,a+n,compare);
    double tot=0;
    for(i=0;i<n;i++)
    {
        if(a[i].wgt<=w)
        {
            tot+=a[i].val;
            w-=a[i].wgt;
        }
        else if(a[i].wgt>w)
        {
            tot += (double)w * a[i].frac;
            w=0;
        }
    }
    if(w!=0)
        cout<<"-1";
    else 
        cout<<fixed<<setprecision(20)<<tot;
    return 0;
    
    
}
