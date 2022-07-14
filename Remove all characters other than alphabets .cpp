class Solution{
public:
    string removeSpecialCharacter(string s) {
        // code here
        string ans = "";
        for(auto x: s){
            if((x>='A'&&x<='Z')||(x>='a'&&x<='z'))
                ans+=x;
        }
        if(ans.size()==0)
            return "-1";
        return ans;
    }
};
