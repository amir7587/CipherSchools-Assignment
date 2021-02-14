#include <bits/stdc++.h>
using namespace std;
void findFirstLastOccurence(std::vector<int>&v,int k)
{
    auto it=find(v.begin(),v.end(),k);
    int firstOccurence=it-v.begin(),lastOccurence=0;
    int tempfirst=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==k)
        {
            lastOccurence=max(i,lastOccurence);
        }
    }
    if(firstOccurence==v.size())
    {
        cout<<"Element Not Found"<<endl;
        return;
    }
    else{
    cout<<"FirstOccurence at:"<<firstOccurence<<endl<<"lastOccurence at:"<<lastOccurence;
    }
}
int main() {
	// your code goes here
	vector<int> v={1, 3,5,67, 123, 125};
    int	k=5;
	findFirstLastOccurence(v,k);
	return 0;
}
