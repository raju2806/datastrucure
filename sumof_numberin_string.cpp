#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int sum=0;
    for(auto x : s){sum+=x-'0';}
    cout<<sum<<endl;
    return 0;
}