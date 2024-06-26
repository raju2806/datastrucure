#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,rem=0,armstrong=0;
    cin>>n;
    int temp=n;
    while(n>0)
    {
        rem=n%10;
        armstrong+=(rem*rem*rem);
        n=n/10;
    }
    if(temp==armstrong){cout<<"Yes"<<endl;}
    else {cout<<"No"<<endl;}

    return 0;
}