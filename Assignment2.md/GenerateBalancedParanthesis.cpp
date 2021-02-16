#include<bits/stdc++.h>
using namespace std;

void balancedParenthesisHelp(vector<string>&result,int open,int close,int n,string s)
{
    if(open<0||close<0||open>n||close>n||close>open){
    return;
        
    }
    if(open==n && close==n)
    {
        result.push_back(s);
        return;
    }
    balancedParenthesisHelp(result,open+1,close,n,s+"{");
    balancedParenthesisHelp(result,open,close+1,n,s+"}");
}
vector<string> balancedParenthesis(int n)
{
    vector<string> result;
    balancedParenthesisHelp(result,0,0,n,"");
    return result;
}
int main()
{
    
    vector<string> result=balancedParenthesis(5);
    for(string s:result)
    {
        cout<<s<<endl;
    }
    return 0;
}
