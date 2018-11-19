class Solution {
public:
    string longestPalindrome(string s) {
		int len = s.length();
		vector<vector<bool> > dp;
		dp.resize(len);
		int start=0, sublen = 1;
		for (int i = 0; i < len; i++) {
			dp[i].resize(len);
			dp[i][i] = true;
			if (i + 1 < len) {
				if (s[i] == s[i + 1]) {
					dp[i][i+1] = true;
					start = i;
					sublen = 2;
				}
			}
		}

		for (int l = 3; l <= len; l++) {
			for (int i = 0; i + l <= len; i++) {
				int j = i + l - 1;
				if (dp[i+1][j-1]) {
					if (s[i] == s[j]) {
						dp[i][j] = true;
						start = i;
						sublen = l;
					}
				}
			}
		}
		if (len == 0) {
			return "";
		}
		return s.substr(start, sublen);
    }
};