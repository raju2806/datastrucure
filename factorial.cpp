#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact=1,sum=0;
    for(int i=n; i>=1; i--)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
}