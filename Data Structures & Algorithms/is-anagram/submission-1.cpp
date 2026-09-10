#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> mp, mt;
        for (size_t i = 0; i < s.size(); i++) mp[s[i]]++, mt[t[i]]++;
        return mp == mt;
    }
};
