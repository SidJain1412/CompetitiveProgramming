// Activity Selection Problem

// You are given n activities with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.

// Example 1 : Consider the following 3 activities sorted by
// by finish time.
//      start[]  =  {10, 12, 20};
//      finish[] =  {20, 25, 30};
// A person can perform at most two activities. The 
// maximum set of activities that can be executed 
// is {0, 2} [ These are indexes in start[] and 
// finish[] ]

// Example 2 : Consider the following 6 activities 
// sorted by by finish time.
//      start[]  =  {1, 3, 0, 5, 8, 5};
//      finish[] =  {2, 4, 6, 7, 9, 9};
// A person can perform at most four activities. The 
// maximum set of activities that can be executed 
// is {0, 1, 3, 4} [ These are indexes in start[] and 
// finish[] ]

#include <iostream>
#include <algorithm>
using namespace std;

struct Activity
{
    int start;
    int end;
};

bool actComp(Activity a, Activity b)
{
    return (a.end < b.end);
}

void printMaxActivities(Activity act[], int n)
{
    sort(act, act+n, actComp);
    int i=0,j=0,k=1;
    cout<<"Activity "<<k++<<" Start:"<<act[0].start<<" Stop:"<<act[0].end<<endl;
    for(i=1;i<n;i++)
    {
        if(act[i].start > act[j].end)
        {
            cout<<"Activity "<<k++<<" Start:"<<act[i].start<<" Stop:"<<act[i].end<<endl;
            j=i;
        }
    }
    cout<<"Total "<<k-1<<" activities";
}

int main()
{
    
    cout<<"Hello World"<<endl;
    Activity act[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}}; 
    int n = 6;
    printMaxActivities(act, n);

    return 0;
}
