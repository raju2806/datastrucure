#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int sum=0; 
    cin>>n;
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=0; i<n-2; i++)
    {
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }

}