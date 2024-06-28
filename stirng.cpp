#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int num = 0,i=0; 
    // while(s[i]!='\0') {i++;}
    // for(int t = 1; t < i; t++) {num = num * 10 + (s[t] - '0');} 
    for(auto x: s){num = num * 10 + (x - '0');}
    cout<<num<<endl;
    if(num%3==0){cout<<"Yes"<<endl; }
    else {cout<<"No"<<endl;}
    return 0;
}