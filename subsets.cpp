class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subs;
        vector<int> cur;
        getSubsets(nums, 0, cur, subs);
        return subs;
    }
private:
    void getSubsets(vector<int>& nums, int i, vector<int>& cur, vector<vector<int>>& subs) {
        subs.push_back(cur);
        for (int j = i; j < nums.size(); j++) {
            cur.push_back(nums[j]);
            getSubsets(nums, j + 1, cur, subs);
            cur.pop_back();
        }
    }
};
