#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int n,i,j,flag,key;
    cout<<"Enter no to find prime nth no: ";
    cin>>n;
    vector<int> vec;

    for(i=1; i<n; i++)
    {
        if(i==0 || i==1){continue;}

        flag=1;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1) 
        {
            vec.insert(vec.end(),i);
        }    
    }
    cout<<"Enter Key no: ";
    cin>>key;

    for(auto x : vec)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}