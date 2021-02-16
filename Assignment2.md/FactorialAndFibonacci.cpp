#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n==0 || n==1)
    return 1;
    else{
    return n*factorial(n-1);
}
}
int fibonacci(int n)
{
    if(n<=1)
    return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main() {
	// your code goes here
	int n=5;
	cout<<factorial(n)<<endl;
	cout<<fibonacci(9)<<endl;
	return 0;
}
