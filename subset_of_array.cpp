#include<iostream>
#include<algorithm>

using namespace std;

string subset(int arr[],int arr1[],int n, int m)
{
    sort(arr,arr+n);
    sort(arr1, arr1+m);
    
    int i=0 ,j=0;

    while(i<n && j<m)
    {
        if (arr[i] < arr1[j]) {
            i++;
        } else if (arr[i] == arr1[j]) {
            i++;
            j++;
        } else {
            return "No";
        }
    }

    // If we have traversed all elements of a2, then it is a subset
    if (j == m) {
        return "Yes";
    } else {
        return "No";
    }
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

    cout<<subset(arr,arr1,n,m)<<endl;

    return 0;
}