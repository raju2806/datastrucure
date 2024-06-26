#include<bits/stdc++.h>
using namespace std;

void selctionsort(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        int min=i;
        for (int j = i+1; j < n; j++)  
        {
            if (arr[j] < arr[min])  
            min = j;  
        }
        swap(arr[min],arr[i]);
    }
}
void printarr(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
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
    selctionsort(arr,n);
    printarr(arr,n);

    return 0;
}
