{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       unordered_map<char,pair<int,int>>mp;
       for(int i=0;i<S.size();i++){
           if(mp.find(S[i])==mp.end()){
               mp[S[i]].first= 1;
               mp[S[i]].second = i;
           }
           else
                mp[S[i]].first++;
       }
       int ind = INT_MAX;
       for(auto x : mp){
           if(x.second.first==1)
           ind = min(x.second.second,ind);
       }
       if(ind==INT_MAX)
            return '$';
       return S[ind];
    }

};
