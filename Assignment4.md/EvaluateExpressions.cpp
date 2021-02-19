#include<bits/stdc++.h>
using namespace std;
int evaluateExpression(vector<string>&result)
{
    stack<int> s;
    int n=result.size();
    for(int i=0;i<n;i++)
    {
        if(result[i]=="+"||result[i]=="-"||result[i]=="*"||result[i]=="/")
        {
            int v1=s.top();
            s.pop();
            int v2=s.top();
            s.pop();
            if(result[i]=="+")
            s.push(v2+v1);
            else if(result[i]=="-")
            s.push(v2-v1);
            else if(result[i]=="*")
            s.push(v2*v1);
            else
            s.push(v2/v1);
        }
        else
        {
            s.push(stoi(result[i]));
        }
    }
    return s.top();
}
int main()
{
    vector<string> result={"1","2","3","4","+","-","*"};
    cout<<evaluateExpression(result)<<" ";
    return 0;
    
}
