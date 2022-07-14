class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long int currmul1 = 1;
	    long long int currmul2 = 1;
	    long long int final1 = INT_MIN;
	    long long int final2 = INT_MIN;
	    for(int i=0;i<n;i++){
	        currmul1*=arr[i];
	        final1 = max(currmul1,final1);
	        currmul2*=arr[n-1-i];
	        
	        final2 = max(currmul2,final2);
	        if(currmul2==0)
	            currmul2=1;
	        if(currmul1==0)
	            currmul1=1;
	    }
	    return max(final1,final2);
	}
};
