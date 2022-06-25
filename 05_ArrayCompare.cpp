class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        auto j = B.begin();
        for(auto i : A){
            
            if(i != *j){
                return 0;
            }
            j++;
        }
        return 1;
    }
};