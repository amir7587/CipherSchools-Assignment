#include <bits/stdc++.h>
using namespace std;
int findMinPlatform(vector<int>&arr,vector<int>&dept)
{
    sort(arr.begin(),arr.end());
    sort(dept.begin(),dept.end());
    int minPlatform=1,currentPlatform=1;
    int i=1,j=0;
    while(i<arr.size() && j<dept.size())
    {
        if(arr[i]>=dept[j])
        {
            currentPlatform-=1;
            j++;
        }
        else
        {
            currentPlatform+=1;
            i++;
        }
        minPlatform=max(minPlatform,currentPlatform);
    }
    return minPlatform;
}
int main() {
	// your code goes here
	vector<int> arr={900, 940,950,1100,1500,1800} ;
	vector<int> dept={910,1200,1120,1130,1900,2000} ;
	cout<<findMinPlatform(arr,dept)<<" ";
	return 0;
}
