#include<iostream>
using namespace std;
 int main()
 {
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n/2; j++)
        {
            if(i==1 || j==1|| i==n/2 )
            {cout<<"*" <<" ";}
        }
        cout<<endl;
    }

    return 0;
 }