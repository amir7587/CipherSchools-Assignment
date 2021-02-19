#include<bits/stdc++.h>
using namespace std;
void nextGreaterElement(vector<int> &result)
{
   stack<int> s;
   int n=result.size();
   s.push(result[0]);
   for(int i=1;i<n;i++)
   {
       if(s.empty())
       {
       s.push(result[i]);
       continue;
       }
       while(s.empty()==false && s.top()<result[i])
       {
           cout<<s.top()<<" has Next Greater Element "<<result[i]<<endl;
           s.pop();
       }
       s.push(result[i]);
   }
    while (s.empty() == false)
    {
        cout << s.top() << " has Next Greater Element =  " << -1 << endl;
        s.pop();
    }
}
int main()
{
    vector<int> result={7, 6, 12,13};
    nextGreaterElement(result);
    return 0;
}
