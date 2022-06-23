long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int max_ending_here = 0, max_so_far =0;
        for(int i =0; i<n; i++){
            max_ending_here += arr[i];
            if(max_ending_here < 0){
                max_ending_here = 0;
            }
            if(max_so_far < max_ending_here){
                max_so_far = max_ending_here;
            }
        }
        if(max_so_far==0){
            sort(arr,arr+n);
            max_so_far = arr[n-1];
        }
        return max_so_far;
    }