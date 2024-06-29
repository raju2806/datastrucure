#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sliding_window(int arr[], int n, int k)
{
    int sumk;
    for (int i = 0; i < n-k+1; i++) {
        sumk = 0;
        for (int j = i; j < k+i; j++) {sumk += arr[j];}
    cout<<sumk<<" ";
    }
    
 
}

int main()
{
    int n,k,sum;
    
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter window size: ";
    cin>>k;
    cout<<"Enter array element: ";
    for(int i=0; i<n; i++){cin>>arr[i];}

    // for (int i = 0; i < n-k+1; i++) {
    //     sum = 0;
    //     for (int j = i; j < k+i; j++) {sum += arr[j];}
    // cout<<sum<<" ";
    // }

    sliding_window(arr,n,k);
    return 0;

}