#include<bits/stdc++.h>
using namespace std;
int findPeakElement(vector<int> v,int l,int r)
{
    int mid=l+(r-l)/2;
    if((mid==0||v[mid]>=v[mid-1])&&(mid==v.size()-1||v[mid]>=v[mid+1]))
    return mid;
    else if(mid>0 && v[mid-1]>v[mid])
    return findPeakElement(v,l,mid-1);
    else
    return findPeakElement(v,mid+1,r);
}
int main()
{
    vector<int>v={1, 3 ,4, 20, 1, 0 };
    cout<<"Peak Element:"<<findPeakElement(v,0,v.size()-1)<<" ";
    return 0;
}
