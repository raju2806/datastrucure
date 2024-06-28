#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int num = 0,len=0; 
    // while(s[len]!='\0') {len++;} // Here we find the length of string; 
    // for(int t = 1; t < len; t++) {num = num * 10 + (s[t] - '0');} //Here we going to convet string to no: 
    for(auto x: s){num = num * 10 + (x - '0');}
    cout<<num<<endl;
    if(num%3==0){cout<<"Yes"<<endl; }
    else {cout<<"No"<<endl;}
    return 0;
}