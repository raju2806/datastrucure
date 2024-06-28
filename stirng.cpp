#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    long long n = stoi(s);

    if(n%3==0){cout<<"Yes"<<endl; }
    else {cout<<"No";}
    return 0;
}