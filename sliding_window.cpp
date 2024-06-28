#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sliding_window(int arr[], int n, int k)
{
    int max=INT_MIN;
    for (int i = 0; i <= n-k; i++)
    {
        for(int j=1; j<k; j++)
        {
            if(arr[i+j]>max){max=arr[i+j];}
        }
        cout<<max<<" ";
    }
    
}

int main()
{
    int n,k;
    int arr[n];
    cout<<"Enter window size: ";
    cin>>k;

    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter array element: ";
    for(int i=0; i<n; i++){cin>>arr[i];}

    sliding_window(arr,n,k);


    return 0;

}