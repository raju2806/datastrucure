#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int n=s.length(),sum=0;
    int num =stoi(s);
    for(int i=0; i<=n; i++)
    {
        sum+=i;
    }
    
    cout<<sum<<endl;
    return 0;
}