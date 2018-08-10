class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> m;
		vector<int> r;
		for (int i = 0; i <nums.size(); i += 1) {
			m[nums[i]] = i;
		}
		for (int i = 0; i < nums.size(); i += 1) {
			int temp = target - nums[i];
			if (m.count(temp) && m[temp] != i) {
				r.push_back(i);
				r.push_back(m[temp]);
				return r;
			}
		}
		return r;
	}
}