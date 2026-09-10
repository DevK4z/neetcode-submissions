class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set <int> s;
        for (int i : nums) {
            if (!s.insert(i).second) return true;
        }
        return false;
    }
};