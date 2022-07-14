unordered_map<int,pair<int,int>>mp;
    int firstNonRepeating(int arr[], int n) 
    { 
        for(int i=0;i<n;i++){
        if(mp.find(arr[i])==mp.end()){
            mp[arr[i]].first = 1;
            mp[arr[i]].second = i;
        }
        else
            mp[arr[i]].first++;
        }
            
    int ind = n;
    for(auto x: mp){
        if(x.second.first==1){
            ind = min(ind,x.second.second);
        }
    }
    if(ind==n)
        return 0;
    return arr[ind];
    } 
    
