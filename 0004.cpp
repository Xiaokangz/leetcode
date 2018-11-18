class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int right = min(m, (m+n+1)/2);
        int left = max(0, (m+n+1)/2-n);
        while (right >= left) {
        	int i = (right + left) / 2;
        	int j = (m+n+1)/2 - i;
        	bool flag = true;
        	if (i != m && j != 0) {
        		if (nums1[i] < nums2[j-1]) {
        			left = i + 1;
        			flag = false;
        		}
        	} 
        	if (i != 0 && j != n) {
        		if (nums2[j] < nums1[i-1]) {
        			right = i - 1;
        			flag = false;
        		}
        	}
        	if (flag) {
        		if((m+n) % 2) {
        			if (i == 0) {
        				return nums2[j-1];
        			} else if (j == 0) {
        				return nums1[i-1];
        			} else {
        				return 1.0 * max(nums1[i-1], nums2[j-1]);
        			}
        		} else {
        			int mid1, mid2;
        			if (i == 0) {
        				mid1 = nums2[j-1];
        			} else if (j == 0) {
        				mid1 = nums1[i-1];
        			} else {
        				mid1 = max(nums1[i-1], nums2[j-1]);
        			}
        			if (i == m) {
        				mid2 = nums2[j];
        			} else if (j == n) {
        				mid2 = nums1[i];
        			} else {
        				mid2 = min(nums1[i], nums2[j]);
        			}
        			return (mid1 + mid2) / 2.0;
        		}
        	}
        }
    }
};