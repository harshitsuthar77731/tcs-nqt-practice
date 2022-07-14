string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int,int>mp1;
    unordered_map<int,int>mp2;
    for(int i=0;i<n;i++)
        mp1[a1[i]]++;
    for(int i=0;i<m;i++)
        mp2[a2[i]]++;
        
    for(auto x : mp2){
        if(mp2[x.first]!=mp1[x.first])
            return "No";
    }
        return "Yes";
