#include<iostream>
using namespace std;

int subset(int arr[],int arr1[],int n, int m)
{
    return 0;
}

int main()
{
    int n,m;
    cout<<"Enter size of array a and b: ";
    cin>>n>>m;

    int arr[n];
    int arr1[m];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for (int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }

    cout<<subset(arr,arr1,n,m);

    return 0;
}