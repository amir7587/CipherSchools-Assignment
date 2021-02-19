#include<bits/stdc++.h>
using namespace std;
class MyStack
{
    public:
    int getMin;
    stack<int> s;
    void push(int data)
    {
        if(s.empty())
        {
            s.push(data);
            getMin=data;
        }
        else
        {
            if(data>=getMin)
            {
                s.push(data);
            }
            else
            {
                s.push(2*data-getMin);
                getMin=data;
            }
        }
    }
    void pop()
    {
        if(s.empty())
        return;
        else
        {
            int y=s.top();
            if(y>=getMin)
            s.pop();
            else
            {
                getMin=(2*getMin-y);
                s.pop();
            }
        }
    }
    int getMinimum()
    {
        return getMin;
    }
    void insertAtBottom(int data)
    {
        if(s.empty())
        {
            s.push(data);
        }
        else
        {
            int y=s.top();
            s.pop();
            insertAtBottom(data);
            s.push(y);
        }
    }
    void reverse()
    {
       
        if(!s.empty())
        {
        int y=s.top();s.pop();
        reverse();
        insertAtBottom(y);
        }
    }
    void printStack()
    {
       if(s.empty())
       return;
       int x=s.top();
       s.pop();
       cout<<x<<" ";
       printStack();
       s.push(x);
    }
};
int main()
{
    MyStack m;
    m.push(10);
    m.push(20);
    m.push(12);
    m.printStack();
    m.reverse();
    cout<<endl;
    m.printStack();

    return 0;
}
