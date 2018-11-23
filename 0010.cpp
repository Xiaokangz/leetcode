class Solution {
public:
    bool isMatch(string s, string p) {
		if (p.empty()) {
			return s.empty();
		} else if (p[0] == '*') {
			return isMatch(s, p.substr(1));
		}
		bool tempMatch = false;
		if (s.length() > 0) {
			tempMatch = (s[0] == p[0] || p[0] == '.');
		}
		if (p.length() > 1 && p[1] == '*') {
			return (tempMatch && isMatch(s.substr(1), p)) || isMatch(s, p.substr(2));
		} else {
			return tempMatch && isMatch(s.substr(1), p.substr(1));
		}
    }
};