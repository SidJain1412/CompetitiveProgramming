// Queue using Stacks

// We are given a stack data structure with push and pop operations, the task is to implement a queue using instances of stack data structure and operations on them.


#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

struct Queue
{
    stack<int> s1;
    stack<int> s2;
    
    void enque(int x)
    {
        s1.push(x);
    }
    
    int dequeue()
    {
        if(s1.empty())
            return 0;
        else
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int x = s2.top();
        s2.pop();
        return x;
    }
};

int main()
{
    struct Queue q;
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);
    q.enque(5);
    
    cout<<"\nElement removed is: "<<q.dequeue();
    cout<<"\nElement removed is: "<<q.dequeue();
    cout<<"\nElement removed is: "<<q.dequeue();
    
    return 0;
}
