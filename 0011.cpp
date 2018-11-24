class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        int maxArea = 0;
        while (i < j) {
        	int tempArea;
        	if (height[i] < height[j]) {
        		tempArea = height[i] * (j - i);
        		i++;
        	} else {
        		tempArea = height[j] * (j - i);
        		j--;
        	}
        	if (tempArea > maxArea) {
        		maxArea = tempArea;
        	}
        }
        return maxArea;
    }
};