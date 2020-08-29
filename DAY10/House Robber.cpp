class Solution {
public:
   int rob(vector<int>& arr) {
        if(arr.size() == 0) return 0;
        
        int n = arr.size();
        int dp[n];
        dp[0] = arr[0];
        if(n>1) dp[1] = max(arr[0], arr[1]);

        for(int i=2; i<n; i++) {
            dp[i] = max(max(arr[i], dp[i-1]), dp[i-2] + arr[i]);
        }

	    return dp[n-1];  
    }
};
