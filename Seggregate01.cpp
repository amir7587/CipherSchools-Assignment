#include<bits/stdc++.h>
using namespace std;
void segregate(vector<int>&v)
{
    int l=0,r=v.size()-1;
    while(l<r){
    while(v[l]==0 && l<r)
    l++;
    while(v[r]==1 && l<r)
    r--;
    if(l<r)
    {
        v[l]=0;
        v[r]=1;
        l++;
        r--;
    }
}
}
int main()
{
    std::vector<int> v={0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    segregate(v);
    for(int i=0;i<v.size()-1;i++)
    cout<<v[i]<<" ";
    return 0;
}
