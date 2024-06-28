#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int num = 1,i=0; 
    while(s[i]!='\0') {i++;}
    for(int t = 1; t < i; t++) {num = num * 10 + (s[t] - '0');} 
    if(num%3==0){cout<<"Yes"<<endl; }
    else {cout<<"No"<<endl;}
    return 0;
}