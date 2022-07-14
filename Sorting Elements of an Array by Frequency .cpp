#include <iostream>
#include<bits/stdc++.h>
using namespace std;

    bool cmp(pair<int,int>&p1,pair<int,int>&p2){
        if(p1.first==p2.first)
            return p1.second<p2.second;
        else
            return p1.first>p2.first;
    }
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    unordered_map<int,int>mp;
	    for(int i=0;i<n;i++)
	        mp[arr[i]]++;
	    vector<pair<int,int>>vp;
	    for(auto x : mp){
	        vp.push_back({x.second,x.first});
	    }
	    sort(vp.begin(),vp.end(),cmp);
	    for(auto x : vp){
	        int t = x.second;
	        for(int i=0;i<x.first;i++){
	            cout<<t<<" ";
	        }
	    }
	    cout<<endl;
	    
	}
	return 0;
}
