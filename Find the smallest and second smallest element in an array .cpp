vector<int> minAnd2ndMin(int a[], int n) {
    if(n<2)
        return {-1,-1};
    int fs = INT_MAX;
    int ss = INT_MAX;
    for(int i=0;i<n;i++)
        fs = min(fs,a[i]);
    for(int i=0;i<n;i++)
    {
         if(a[i]==fs)
            continue;
        ss = min(ss,a[i]);
    }
    if(ss==INT_MAX)
        return {-1,-1};
    return {fs,ss};
}
