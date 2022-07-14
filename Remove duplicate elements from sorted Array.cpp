class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        int count = 1;
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1])
                continue;
            else
                count++;
        }
        int i = 0;
        int j = 0;
        while(j<n){
            if(a[i]==a[j])
                j++;
            else{
                i++;
                a[i] = a[j];
                j++;
            }
        }
        return count;
    }
};
