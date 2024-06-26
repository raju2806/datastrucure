#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }    
    sort(arr,arr+n);
    for(int i=0;i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int small=INT_MAX,second_small=INT_MAX;
    int large=INT_MIN,second_large=INT_MIN;
    for(int i=0; i<n; i++)
    {
        small=min(small,arr[i]);
        large=max(large,arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]<second_small  && arr[i]!=small)
        {
            second_small=arr[i];
        }
        if(arr[i]>second_large && arr[i]!=large)
        {
            second_large=arr[i];
        }
    }
    cout<<small<<endl;
    cout<<large<<endl;

    cout<< second_large<<endl;
    cout<< second_small<<endl;
    return 0;
}

