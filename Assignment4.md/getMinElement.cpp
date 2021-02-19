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
};
int main()
{
    MyStack m;
    m.push(10);
    m.push(20);
    m.push(12);
    cout<<"Minumum:"<<m.getMinimum()<<endl;
    m.pop();
    m.pop();
    m.pop();
    m.pop();
     cout<<"Minumum:"<<m.getMinimum()<<endl;
    return 0;
}
