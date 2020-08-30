class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        if(nums.empty())
            return 0;
        unordered_map<int,int> dp;
        unordered_map<int,int> next;
        dp[ nums[0]]++;
        dp[-nums[0]]++;
        for(int i = 1; i < nums.size(); i++) {
            next.clear();
            for(auto mp : dp) {
                next[mp.first + nums[i]] += dp[mp.first];
                next[mp.first - nums[i]] += dp[mp.first];
            }
            dp = next;
        }
        return dp[S];
    }
};
