int binarysearch(int arr[], int n, int k) {
        // code here
        int st =0 ;
        int end = n-1;
        int mid;
        while(st<=end){
            mid = (st+end)/2;
            if(arr[mid]==k){
                return mid;
            }
            else if(k>arr[mid]){
                st = mid+1;
            }
            else if(k<arr[mid]){
                end = mid - 1;
            }
        }
        return -1;
    }