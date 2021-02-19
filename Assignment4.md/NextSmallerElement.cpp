#include<bits/stdc++.h>
using namespace std; 
void printPrevSmaller(vector<int> &arr) 
{ 
    stack<int> S; 
    int n=arr.size();
  
    for (int i=0; i<n; i++) 
    { 
        while (!S.empty() && S.top() >= arr[i]) 
            S.pop(); 
        if (S.empty()) 
            cout << "_, "; 
        else   
            cout << S.top() << ", "; 

        S.push(arr[i]); 
    } 
} 
  

int main() 
{ 
    vector<int>arr= {1, 3, 0, 2, 5}; 
    printPrevSmaller(arr); 
    return 0; 
} 
