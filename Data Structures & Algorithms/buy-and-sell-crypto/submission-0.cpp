class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = INT_MAX;
        int res = 0;
        for (int p : prices) {
            mn = min(mn, p);
            res = max(res, p - mn);
        }
        return res;
    }
};
