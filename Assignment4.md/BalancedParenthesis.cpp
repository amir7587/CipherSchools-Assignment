#include<bits/stdc++.h>
using namespace std;
bool isMatching(char open,char close)
{
    return(open=='('&& close==')');
}
bool balanceParenthesis(string str)
{
    std::stack<char> s;
    int n=str.size();
    for(int i=0;i<n;i++)
    {
        if(str[i]=='(')
        s.push(str[i]);
        else
        {
            if(s.empty())
            return false;
            char open=s.top();
            s.pop();
            if(!isMatching(open,str[i]))
            return false;
        }
    }
    if(!s.empty())
    return false;
    return true;
}

int main()
{
    string s="((()()";
    if(balanceParenthesis(s))
    cout<<"Balanced"<<" ";
    else
    cout<<"Not Balanced";
}
