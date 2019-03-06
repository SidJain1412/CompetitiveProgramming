// The Bag of Gold

// You are given an empty bag that is supposed to be filled with gold, and it can carry at max W kgs of gold in it.

// You are given N samples of gold, with the ith of them weighing Wi and having value Vi.

// Your task is to fill the bag with exactly W kgs of gold such that the total value of the gold inside the bag is maximum.

// You need not take the entire samples of gold, you can break them down and take fractions of those samples as well. For example, if you have two samples, one with weight 10 and value 10 and another with weight 5 and value 10, you can fill a 5 kg capacity bag with 2.5 kg of first sample and 2.5 kg of second sample. The value for such a bag will be the sum of values of all the pieces, i.e. for the first sample 2.5 kg has value 2.5 and for the second sample 2.5 kg has value 5, hence the total value of the bag becomes 7.5

// INPUT
// First line contains two integers, N and W. 
// Second onwards, there are N lines with each of them containing two integers, first one being the weight of the sample and the second one being the value of the sample

// OUTPUT
// Print one number, the maximum attainable value when the bag is filled with W kgs of gold. If it is not possible to fill the bag with W kgs of gold, print -1.

// CONSTRAINTS
// 1 ≤ N ≤ 105 
// 1 ≤ W ≤ 109 
// 1 ≤ weights, values ≤ 109 

// Sample Input 0

// 3 10
// 5 5
// 3 10
// 4 4
// Sample Output 0

// 17.000000000000
// Explanation 0

// We can take 3 kgs of sample 2, 4 kgs of sample 1 and 3 kgs of sample 3 to attain the maximum value

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

void swap(double *xp, double *yp) 
{ 
    double temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long int n,weight,i,j;
    double profit=0.0;
    cin>>n;
    cin>>weight;
    long int w[n];
    long int v[n];
    double ratio[n];
    for(i=0;i<n;i++)
    {
        cin>>w[i];
        cin>>v[i];
        ratio[i]=(double)v[i]/w[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(ratio[j]<ratio[j+1])
            {
                swap(ratio[j], ratio[j+1]);
                swap(w[j],w[j+1]);
                swap(v[j],v[j+1]);
            }
            if(ratio[j]==ratio[j+1])
            {
                if(w[j]>w[j+1])
                {
                    swap(w[j],w[j+1]);
                    swap(v[j],v[j+1]);
                }
            }
        }
    }
    // cout<<"Weight\tValue\tRatio\n";
    // for(i=0;i<n;i++)
    //     cout<<w[i]<<"\t"<<v[i]<<"\t"<<ratio[i]<<endl;
    for(i=0;i<n;i++)
    {
        if(weight>0 && w[i]<=weight)
        {
            weight-=w[i];
            profit+=v[i];
        }
        else
            break;
        
    }
    if(weight>0)
        profit+=v[i]*weight/w[i];
    cout<<profit;
    return 0;
}
