#include<bits/stdc++.h>
using namespace std;
void generatePermutaionHelp(string str,int start,int end,vector<string>&result)
{
    if(start>=end)
    {
        result.push_back(str);
        return;
    }
    else
    {
        for(int i=start;i<=end;i++)
        {
            swap(str[i],str[start]);
            generatePermutaionHelp(str,start+1,end,result);
            swap(str[i],str[start]);
        }
    }
}
vector<string> generatePermutaion(string str)
{
    vector<string> result;
    generatePermutaionHelp(str,0,str.size()-1,result);
    return result;
}
int main()
{
    vector<string> s=generatePermutaion("abc");
    for(string str:s)
    {
        cout<<str<<" ";\
    }
    return 0;
}
