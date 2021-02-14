#include<bits/stdc++.h>
using namespace std;
void alternateSort(vector<int>&vec)
{
    sort(vec.begin(),vec.end());
    int l=0,r=vec.size()-1;
    while(l<r)
    {
        cout<<vec[r--]<<" "<<vec[l++]<<" ";
    }
    if((vec.size())%2!=0)
    cout<<vec[l]<<endl;
    return;
}
int main()
{
    vector<int> vec={7, 1, 2, 3, 4, 5, 6};
    alternateSort(vec);
    return 0;
}
