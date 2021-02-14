#include <bits/stdc++.h>
using namespace std;
vector<int> mergeSortedArrays(const vector<int>first,const vector<int>second)
{
    int i=0,j=0,k=0;
    vector<int> result(first.size()+second.size());
    while(i<first.size() && j<second.size())
    {
        if(first[i]<=second[j])
        {
            result[k++]=first[i];
            i++;
        }
        else
        {
            result[k++]=second[j];
            j++;
        }
    }
    while(i<first.size())
    {
        result.push_back(first[i]);
        i++;k++;
    }
    while(j<second.size())
    {
        result.push_back(second[j]);
        j++;k++;
    }
    return result;
}
int main()
{
    vector<int> first={1,24,5,6,6};
    vector<int> second={2,4,6,7,8,3};
    vector <int> result=mergeSortedArrays(first,second);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}
