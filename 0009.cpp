class Solution {
public:
    bool isPalindrome(int x) {
    	if (x < 0) {
    		return false;
    	}
   		stringstream ss;
   		ss << x;
   		string str;
   		ss >> str;
   		int len = str.length();
   		int i = 0, j = len - 1;
   		while (i <= j) {
   			if (str[i] != str[j]) {
   				return false;
   			}
   			i++;
   			j--;
   		}
   		return true;
    }
};