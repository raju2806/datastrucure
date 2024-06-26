#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int n=s.length();
    for(int i=0; i<n; i++)
    {
        s[0]-=32;
        s[n-1]-=32;
        for(int i=0; i<n; i++){
            if(s[i]==' ')
            {
                s[i-1]-=32;
                s[i+1]-=32;
            }
        }
    }
cout<<97-65;
    cout<<s;
    return 0;
}