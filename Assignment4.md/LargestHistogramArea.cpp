#include<bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int> &heights)
{
    int area=0,maxArea=0,tp=0,i=0,N=heights.size();
    stack<int> s;
    while(i<N)
    {
        if(s.empty()||heights[s.top()]<heights[i])
        {
            s.push(i++);
        }
        else
        {
            tp=s.top();
            s.pop();
            if(s.empty())
            {
                area=heights[tp]*i;
            }
            else
            {
                area=heights[tp]*(i-s.top()-1);
            }
        }
        maxArea=max(area,maxArea);
    }
    while(!s.empty())
    {
        tp=heights[s.top()];s.pop();
        if(s.empty())
        {
            area=heights[tp]*i;
        }
        else
        {
            area=heights[tp]*(i-s.top()-1);
            
        }
        maxArea=max(maxArea,area);
    }
    return maxArea;
}
int main()
{
    vector<int>heights={6, 2, 5, 4, 5, 1, 6};
    cout<<largestRectangleArea(heights)<<" ";
    return 0;
}
