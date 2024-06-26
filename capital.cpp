#include<iostream>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int n=s.length();
    s[0]-=32;
    s[n-1]-=32;
    cout<<s<<endl;
    return 0;
}