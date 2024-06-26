#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int partion (int arr[],int low, int high)
// {
//     int pivot = arr[high]; 
//     int i = low - 1;       

//     for (int j = low; j < high; ++j) {
//         if (arr[j] <= pivot) {
//             ++i;
//             swap(arr[i], arr[j]); 
//         }
//     }
//     swap(arr[i + 1], arr[high]);
//     return i + 1;  
// }

int partion(int arr[], int low, int high)
{
    int pivot=arr[low];
    int i= low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=pivot && i<=high-1)
        {i++;}
        while(arr[j]>pivot &&  j>=low+1)
        {j--;}
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quicksort(int arr[], int low , int high)
{
    if(low<high){
        int pivot=partion(arr,low,high);
        quicksort(arr,low,pivot-1);
        quicksort(arr,pivot+1,high);
    }
}

void printarr(int arr[],int n)
{
    for(int i=0;i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
    quicksort(arr,0,n-1);
    cout<<"After sorting element: "<<" ";
    printarr(arr,n);
    
    return 0;
}