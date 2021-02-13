#include<bits/stdc++.h>
using namespace std;
int searchElement(vector<vector<int>>v,int x)
{
    int minElem=v[0][0];
    int maxElem=v[v.size()-1][v.size()-1];
    int l=0;
    int r=v.size()-1;
    while(l<v.size()-1 && r>=0)
    {
        if(x==v[l][r])
        {
            cout<<"Element Found at Index:"<<l<<" "<<r<<endl;
            return 1;
        }
        else if(x>v[l][r])
              l++;
        else
        r--;
        
        
    }
    return 0;
}
int main()
{
    vector<vector<int>>v={{ 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 }};
    searchElement(v,29);
    
    return 0;
}
