#include<bits/stdc++.h>
using namespace std;

int linearsearch(int arr[],int n,int target)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==target)
            return i;
    }
    return -1;
}

int main()
{
    int n,target;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter no to find this array ";
    cin>>target;
    int result= linearsearch(arr,n,target);
    if(result==-1)
        cout<<"Not found ";
    else
        cout<<"Element found in array index no "<<result<<endl;    
    return 0;
}