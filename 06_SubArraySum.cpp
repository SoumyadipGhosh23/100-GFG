// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int last = 0;
        int start = 0;
        unsigned long long cursum = 0;
        bool flag = false;
        vector<int> res;
        
        for(int i = 0; i<n; i++){
            cursum += arr[i];
            
            if(cursum >= s){
                last = i;
                while(s<cursum && start < last){
                    cursum -= arr[start];
                    ++start;
                }
                
                if(cursum == s){
                    res.push_back(start + 1);
                    res.push_back(last + 1);
                    
                    flag = true;
                    break;
                }
            }
        }
        if(flag == false){
            res.push_back(-1);
        }
        return res;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends