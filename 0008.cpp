class Solution {
public:
    int myAtoi(string str) {
        if (str.length() == 0) {
            return 0;
        }
        int i;
        int len = str.length();
        for (i = 0; i < len && str[i] == ' '; i++);
        int sign = 1; 
        if (i != len) {
            if (str[i] == '+') {
                i++;
            } else if (str[i] == '-') {
                sign = -1;
                i++;
            }
        }

        double sum = 0;
        while(i < len && isdigit(str[i])) {
            int temp = str[i] - '0';
            sum = sum * 10 + sign * temp;
            if (sum > INT_MAX) {
                return INT_MAX;
            } else if (sum < INT_MIN) {
                return INT_MIN;
            }
            i++;
        }
        return (int)sum;
    }
};