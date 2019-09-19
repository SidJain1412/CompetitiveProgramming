// Implement Stack using Queues
// The problem is opposite of this post. We are given a Queue data structure that supports standard operations like enqueue() and dequeue(). We need to implement a Stack data structure using only instances of Queue and queue operations allowed on the instances.

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

struct Stack
{
    queue<int> q1;
    queue<int> q2;
    
    void enque(int x)
    {
        q2.push(x);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    
    int dequeue()
    {
        // int x;
        // while(!q1.empty())
        // {
        //     x = q1.front();
        //     q1.pop();
        // }
        // return x;
        return q1.back();
    }
};

int main()
{
    struct Stack s;
    s.enque(1);
    s.enque(2);
    s.enque(3);
    s.enque(4);
    s.enque(5);
    
    cout<<"\nElement removed is: "<<s.dequeue();
    cout<<"\nElement removed is: "<<s.dequeue();
    cout<<"\nElement removed is: "<<s.dequeue();
    
    return 0;
}
