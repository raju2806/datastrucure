#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    int vowels=0,consonant=0,white_spaec=0;
    getline(cin,str);
    cout<<str<<endl;
    int n= str.length();
    cout<<n<<endl;
    for(int i=0; i<n; i++)
    {
        if(str[i]== 'a'|| str[i]== 'e' || str[i]== 'i' || str[i]== 'o' || str[i]== 'u') 
        {vowels++;}
        else if(str[i]>='a' && str[i]<='z')
        {consonant++;}
        else if(str[i]== ' ')
        {white_spaec++;}
    }
    cout<<"vowel "<<vowels<<endl;
    cout<<"consonant "<<consonant<<endl;
    cout<<"white_space "<<white_spaec<<endl;

    return 0;
}

