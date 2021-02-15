#include<bits/stdc++.h>
using namespace std;
int stocksBuySell(const vector<int>&vec)
{
  int minVal=vec[0];
  int profit=0;
  for(int i=1;i<vec.size();i++)
  {
      if(minVal<=vec[i])
      {
          int tempProfit=vec[i]-minVal;
          profit=max(profit,tempProfit);
      }
      else
      {
          minVal=vec[i];
      }
  }
  return profit;
}
int main()
{
    vector<int>Price= {100, 180, 260, 310,
                    40, 535, 695 };
    cout<<"Max Profit:"<<stocksBuySell(Price)<<" ";
    return 0;
}
