#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int n, int target)
{
    int st=0;
    int end=n-1;
    while(st<=end)
    {
        int mid=st+(end-st)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        if(arr[mid]<target)
        {
            st=mid+1;
        }
        else
        {
            end=mid-1;
        }
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
    int result= binarysearch(arr,n,target);
    if(result==-1)
        cout<<"Not found ";
    else
        cout<<"Element found in array index no "<<result<<endl;    
    return 0;
}

