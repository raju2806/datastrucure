#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int> vec;
    set<int> set;
    for(int i=0; i<n; i++) {cin>>arr[i];}
    map<int, int> mapp;
    for(auto i: arr) {mapp[i]++;}
    for(auto& pair : mapp) {
        cout<<pair.first<<"  "<<pair.second<<endl;
        vec.push_back(pair.second);
        set.insert(pair.second);
    }
    if(vec.size()==set.size()) {cout<<"Yes "<<endl;}
    else {cout<<"No"<<endl;}

    return 0;
}