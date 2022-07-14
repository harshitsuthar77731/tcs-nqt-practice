    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
         unordered_map<char,int>mp1;
    for(auto x : a)
        mp1[x]++;
    for(auto x : b)
    {
        if(mp1[x]==0)
            return false;
        mp1[x]--;
        if(mp1[x]==0)
            mp1.erase(x);
    }
    return true;
        
    }

};
