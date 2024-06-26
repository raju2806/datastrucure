#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    int Rollno;
    
    public:
    char name [20];    
    int age;    
    int clas;
    void print()
    {
        cout<<name<<endl;
    }

    int getage()
    {
        return age;
    }
    char getclas(){
        return clas;
    }
    void setage(int n)
    {
        age=n;
    }
    void setclas(int c)
    {
        clas=c;
    }
};

int main()
{
    student h1;

    cout<<h1.getage()<<endl;
    cout<<h1.getclas()<<endl;
    cout<<h1.Rollno<<endl;
    return 0;
}