int missingNumber(int A[], int N)
{
    // Your code goes here
    int netsum =( N*(N+1))/2;
    // cout<<netsum<<endl;
    int currsum = accumulate(A,A+N-1,0);
    return netsum-currsum;
    
}
