class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> rowS;
        int len = s.length();
        int n = min(len, numRows);
        rowS.resize(n);
        if (n == 1) {
        	return s;
        }

        for (int i = 0; i < len; i++) {
        	int k = i % (2*numRows-2);
        	if (k < numRows) {
        		rowS[k] += s[i];
        	} else {
        		rowS[2*numRows-2-k] += s[i];
        	} 
        }

        string output = "";
        for (int i = 0; i < n; i++) {
        	output += rowS[i];
        }
        return output;
    }
};