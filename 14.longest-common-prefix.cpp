/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 *
 * https://leetcode-cn.com/problems/longest-common-prefix/description/
 *
 * algorithms
 * Easy (31.52%)
 * Total Accepted:    47.6K
 * Total Submissions: 151K
 * Testcase Example:  '["flower","flow","flight"]'
 *
 * 编写一个函数来查找字符串数组中的最长公共前缀。
 * 
 * 如果不存在公共前缀，返回空字符串 ""。
 * 
 * 示例 1:
 * 
 * 输入: ["flower","flow","flight"]
 * 输出: "fl"
 * 
 * 
 * 示例 2:
 * 
 * 输入: ["dog","racecar","car"]
 * 输出: ""
 * 解释: 输入不存在公共前缀。
 * 
 * 
 * 说明:
 * 
 * 所有输入只包含小写字母 a-z 。
 * 
 */
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int numStrs = strs.size();
        string prefix;
        if (numStrs == 0 || (numStrs == 1 && strs[0].length() == 0)) {
            return prefix;
        }
        int len = strs[0].length();
        for (int i = 0; i < len; ++i) {
            char ch = strs[0][i];
            for (int j = 1; j < numStrs; ++j) {
                if (strs[j].length() <= i || strs[j][i] != ch) {
                    return prefix;
                }
            }
            prefix += ch;
        }
        return prefix;
    }
};
