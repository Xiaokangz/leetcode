class Solution {
public:
	vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
		int numOfCols = nums[0].size();
		int n  = nums.size() * numOfCols;
		if (r * c != n) {
			return nums;
		}
		vector<vector<int>> ans(r, vector<int>(c, 0));
		for (int i = 0; i < n; i += 1) {
			ans[i / c][i % c] = nums[i / numOfCols][i % numOfCols];
		}
		return ans;
	}
};