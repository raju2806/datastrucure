#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,str2;
    cin>>str;
    int n= str.length(), flag=0;
    
    for(int i=0,j=n-1; i<j; i++,j--)
    {
        // swap(str[i],str[j]);
        if(str[i]!=str[j]){
            cout<<str<<" is not palindrome"<<endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        cout<<str<<" is Palindrome"<<endl;
    // cout<<str<<endl;
    return 0;
}