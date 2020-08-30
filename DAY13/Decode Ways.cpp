class Solution {
private:
	int countMessages(const char* str, int idx, int N, vector<int>& dp) {
		if (idx == N) {
			return 1;
		}
		if (dp[idx] != -1) {
			return dp[idx];
		}
		int num = str[idx] - '0', count = 0;
		if (num != 0) {
			count += countMessages(str, idx + 1, N, dp);
			if (N - idx >= 2 && (num * 10 + (str[idx + 1] - '0')) <= 26){
				count += countMessages(str, idx + 2, N, dp);
			}
		}
		return dp[idx] = count;
	}
public:
	int numDecodings(string& s) {
		vector<int> dp(s.length(), -1);
		return countMessages(s.c_str(), 0, s.length(), dp);
	}
};
