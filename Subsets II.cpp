class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> subs;
        vector<int> cur;
        getSubsets(nums, 0, cur, subs);
        return subs;
    }
private:
    void getSubsets(vector<int>& nums, int i, vector<int>& cur, vector<vector<int>>& subs) {
        subs.push_back(cur);
        for (int j = i; j < nums.size(); j++) {
            if (j == i || nums[j] != nums[j - 1]) { 
            cur.push_back(nums[j]);
            getSubsets(nums, j + 1, cur, subs);
            cur.pop_back();
        }
        }
    }
};
