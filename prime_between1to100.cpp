#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int a,b,i,j;
    cin>>a>>b;
    int flag=0;
    if(a>b) {swap(a,b);}   
    for(i=a; i<b; i++)
    {
        if(i==1 || i==0) {continue;}  
        flag=0;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0) 
            {flag=1;
            break;}
        }
        if(flag==0){cout<<i<<" ";}
    }
    return 0;
}