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
    void sortStackHelper(int data)
    {
        if(s.empty()||data<=s.top())
        {
            s.push(data);
        }
        else
        {  
             int y=s.top();
                s.pop();        
                sortStackHelper(data);
                push(y);
               
        }
    }
    void sortStack()
    {
        if(!s.empty())
        {
            int y=s.top();
            s.pop();
            sortStack();
            sortStackHelper(y);
        }
    }
};
int main()
{
    MyStack m;
    m.push(10);
    m.push(20);
    m.push(12);
    m.push(22);
    m.printStack();
    cout<<"\nReverse Stack"<<endl;
    m.reverse();
    cout<<endl;
    m.printStack();
    cout<<endl<<"Sorted Stack:"<<endl;
    m.sortStack();
    m.printStack();

    return 0;
}
