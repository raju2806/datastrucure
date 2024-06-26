#include<iostream>
using namespace std;

bool armstrong(int n)
{
    int sum=0,temp=n,rem=0;
    while (n>0)
    {
        rem=n%10;
        sum+=rem*rem*rem;
        n=n/10;
    }
    return sum==temp;
} 

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        int temp=arr[i];
        if(armstrong(temp)){cout<<"Yes, Armsotong no: "<<endl;}
        else{cout<<"Not, Armstrong no:"<<endl;}
    }
    return 0;
}