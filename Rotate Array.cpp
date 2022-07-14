 void rotateArr(int arr[], int d, int n){
        // code here
          d = d%n;
        reverse(arr,arr+n);
        reverse(arr+n-d,arr+n);
        reverse(arr,arr+n-d);
    }
