class Solution {
  public:
    int maxCoins(int A[], int B[], int T, int n) {
        // code here
        vector<pair<int,int>>vp;
        for(int i=0;i<n;i++){
            vp.push_back({B[i],A[i]});
        }
        sort(vp.begin(),vp.end());
        reverse(vp.begin(),vp.end());
        int count = 0;
        for(auto x : vp){
            // cout<<x.first<<" "<<x.second<<endl;
            if(T==0)
                break;
            int temp = min(x.second,T);
            T = T-temp;
            count+=temp*x.first;
        }
        return count;
    }
};
