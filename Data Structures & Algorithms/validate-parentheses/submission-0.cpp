class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> mp;
        mp['}'] = '{';
        mp[']'] = '[';
        mp[')'] = '(';
        stack<char> st;
        for (char c : s) {
            if (c == '{' || c == '(' || c == '[') st.push(c);
            else if (mp.count(c)) {
                if (st.empty() || st.top() != mp[c]) return false;
                st.pop();
            } else return false;
        }
        return st.empty();
    }
};
