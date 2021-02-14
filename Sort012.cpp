#include<bits/stdc++.h>
using namespace std;
void sort012(vector<int>&vec)
{   int count0=0,count1=0,count2=0;
    for(int i=0;i<vec.size();i++)
    {
        switch(vec[i])
        {
            case 0:count0++;
                    break;
            case 1:count1++;
                    break;
            case 2:count2++;
                    break;
        }
    }
    int i=0;
    while(count0>0)
    {
        vec[i++]=0;
        count0--;
    }
    while(count1>0)
    {
        vec[i++]=1;
        count1--;
    }
    while(count2>0)
    {
        vec[i++]=2;
        count2--;
    }
    return;
}
int main()
{
    vector<int>vec={ 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    sort012(vec);
    for(int i=0;i<vec.size();i++)
    {
        cout<< vec[i] <<" ";
    }
    return 0;
}
