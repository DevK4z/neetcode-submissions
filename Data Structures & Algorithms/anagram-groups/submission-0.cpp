class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> mp;
        sort(strs.begin(), strs.end());
        for (auto x :strs) {
            string t = x;
            sort(t.begin(), t.end());
            mp[t].push_back(x);
        }
        for (auto x : mp) res.push_back(x.second);
        return res;
    }
};