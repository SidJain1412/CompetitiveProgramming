// Subway Runners

// Arrnie is playing the new famous game Subway Runners.
// In this game there are three lanes and one starts from any one of the three lanes.
// Arrnie plays the game in the following manner :
// Switch(1,2)
// Switch(2,3)
// Switch(1,2)
// Switch(2,3).. and so on..

// Switch(x,y) is defined as follows :
// if Arrnie is on lane x, he switches to lane y.
// if Arrnie is on lany y, he switches to lane x.
// if he is neither on lane x nor on y, he stays on the current lane.

// Given the current lane of Arrnie and the number of moves he has made, Print the number of the lane Arrnie started the game in.

// Input Format

// First line contains two integers n and x

// Constraints

// 1 <= n <= 2e9
// 1 <= x <= 3

// Output Format

// Output the lane number thar Arrnie started the game in.

// Sample Input 0

// 4 3
// Sample Output 0

// 2

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,c;
    cin>>n>>c;
    while(n>0)
    {
        if(n%2==0)
        {
            if(c==2)
                c=3;
            else if(c==3)
                c=2;
        }
        else
        {
            if(c==1)
                c=2;
            else if(c==2)
                c=1;
        }
        n--;
    }
    cout<<c;
    return 0;
}
