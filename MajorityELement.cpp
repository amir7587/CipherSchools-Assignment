#include<bits/stdc++.h>
using namespace std;
int getCandidateIndex(vector<int> &v)
{
    int candidateIndex=0;
    int count=1;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]==v[candidateIndex])
        {
            count++;
        }
        else{
        count--;
    }
    if(count==0)
    {
        candidateIndex=i;
        count=1;
    }
    return candidateIndex;
}
}
void findMajority(vector<int>&v)
{
    int candidateIndex=getCandidateIndex(v);
    int freq=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==v[candidateIndex])
        freq++;
    }
    if(freq>=v.size()/2)
    std::cout << v[candidateIndex] << std::endl;
    else
    cout<<"No Majority Exists";
}
int main()
{
    vector<int> v={1,1,3,2,1,1,1,5,6,7} ;
    findMajority(v);
    return 0;
}
