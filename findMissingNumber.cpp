#include<bits/stdc++.h>
using namespace std;
int findMissing(vector<int>&v)
{
    sort(v.begin(),v.end());
    for(int i=1;i<v.size();i++)
    {
        if((v[i]-v[i-1])>1)
        return i+1;
    }
    return 0;
}
int main()
{
    vector<int>v={1, 2, 4, 5, 3, 6, 8};
    int n=findMissing(v);
    if(n)
    cout<<n<<endl;
    else
    cout<<"No number is Missing";
    return 0;
}
