#include<bits/stdc++.h>
using namespace std;
int findKSmallestNumber(vector<int>&v,int k)
{
    sort(v.begin(),v.end());
    return v[k-1];
}
int main()
{
    vector<int>v={10,3,5,7,11,23,6};
    int k=3;
    cout<<findKSmallestNumber(v,k);
    return 0;
}
