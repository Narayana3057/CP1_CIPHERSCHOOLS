class Solution {
public:
    int rob(vector<int>& nums) {
        int i, n=nums.size();
        vector<vector<int>> dp(n+1, vector<int>(2));
        for(i=1; i<=n; i++){
            dp[i][1]=max(dp[i-1][0]+nums[i-1], dp[i-1][1]);
            dp[i][0]=dp[i-1][1];
        }
        return max(dp[n][1], dp[n][0]);
    }
};
