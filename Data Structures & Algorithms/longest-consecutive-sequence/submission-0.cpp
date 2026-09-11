class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;
        for (int num : s) {
            if (!s.count(num - 1)) {
                int curNum = num;
                int curStreak = 1;
                while (s.count(curNum + 1)) curNum++, curStreak++;
                longest = max(longest, curStreak);
            }
        }
        return longest;
    }
};