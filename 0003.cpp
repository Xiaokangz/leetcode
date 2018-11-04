class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> nearest;
        vector<int> maxlen;
        int prevpos = -1;
        int temppos;
        for (int i = 0; i < s.size(); i++) {
        	char ch = s[i];
        	if (nearest.find(ch) == nearest.end()) {
        		temppos = -1;
        	} else {
        		temppos = nearest[ch];
        	}
        	prevpos = max(temppos, prevpos);
        	maxlen.push_back(i - prevpos);
        	nearest[ch] = i;
        }
        int maxValue = 0;
        for (int& val : maxlen) {
        	if (val > maxValue) {
        		maxValue = val;
        	}
        }
        return maxValue;
    }
};