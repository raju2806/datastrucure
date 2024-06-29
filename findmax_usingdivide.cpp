#include <iostream>
using namespace std;
int maxsimum(int a[], int l, int r) {
    if (l == r)  
        return a[l];
    int m = (l+r)/2;
    int u = maxsimum(a,l,m);
    int v = maxsimum(a,m+1,r);
    return u>v?u:v;    
}

int main() {
    // int a[] = {34,23,45,56,30,31,57,33,55,10};
    int k;
    cout<<"Enter the size of array: ";
    cin>>k;
    int arr[k];
    for(int i=0; i<k; i++){cin>>arr[i];}
    int n = sizeof(arr)/sizeof(int);
    cout << maxsimum(arr,0,n) <<" " <<endl;         
    return 0;
}