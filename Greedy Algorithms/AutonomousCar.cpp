// Autonomous Car

// A futuristic company is building an autonomous car. The scientists at the company are training the car to perform Reverse parking. To park, the car needs to be able to move in backward as well as forward direction. The car is programmed to move backwards B meters and forwards again, say F meters, in a straight line. The car does this repeatedly until it is able to park or collides with other objects. The car covers 1 meter in T units of time. There is a wall after distance D from car's initial position in the backward direction.

// The car is currently not without defects and hence often hits the wall. The scientists are devising a strategy to prevent this from happening. Your task is to help the scientists by providing them with exact information on amount of time available before the car hits the wall.

// Input Format:

// First line contains total number of test cases, denoted by N Next N lines, contain a tuple containing 4 values delimited by space F B T D, where 1. F denotes forward displacement in meters 2. B denotes backward displacement in meters 3. T denotes time taken to cover 1 meter 4. D denotes distance from Car's starting position and the wall in backward direction

// Output Format:

// For each test case print time taken by the Car to hit the wall

// Constraints:
// First move will always be in backward direction
// 1 <= N <= 100
// backward displacement > forward displacement i.e. (B > F)
// forward displacement (F) > 0
// backward displacement (B) > 0
// time (T) > 0 
// distance (D) > 0
// All input values must be positive integers only

// Sample Input 0

// 2
// 6 9 3 18
// 3 7 5 20
// Sample Output 0

// 162
// 220

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        
        int f,b,t,d;
        cin>>f>>b>>t>>d;
        long long ans=0;
        int count=0,dist=0;
        while(true)
        {
            if(dist+b<d)
            dist+=b;
            
            else
            {
                ans+=(d-dist)*t;
                break;
            }
                
            dist-=f;
            
            count++;
            
        }
        ans+=(count*t)*(f+b);
        
        cout<<ans<<endl;
        
    }
    
    return 0;
}
