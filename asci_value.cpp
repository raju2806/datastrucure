#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string c;
    getline(cin,c);
    int n=c.length();
    for(int i=0;i<n; i++)
    {
        cout<<int(c[i])<<" ";
    }
    return 0;
}