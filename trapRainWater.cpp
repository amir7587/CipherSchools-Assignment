#include<bits/stdc++.h>
using namespace std;
int trapRainWater(const vector<int>&v)
{
    int size=v.size();
    vector<int>lMax(size),rMax(size);
    lMax[0]=v[0];
    for(int i=1;i<size;i++)
    {
     lMax[i]=max(lMax[i-1],v[i]);   
    }
    rMax[size-1]=v[size-1];
    for(int j=size-2;j>=0;j--)
    {
        rMax[j]=max(rMax[j+1],v[j]);
    }
    int count=0;
    for(int i=0;i<size;i++)
    {
        count+=(min(lMax[i],rMax[i])-v[i]);
    }
    return count;
}
int main()
{
    vector<int>vec={3, 0, 2, 0, 4};
    int trap=trapRainWater(vec);
    cout<<"Total Trapped:"<<trap;
    return 0;
}
