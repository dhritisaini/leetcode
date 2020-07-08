class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        
           map<int,int> mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]=i;
        
        vector<int> index;
        for(int i=0;i<nums.size();i++)
        {
            int key=target-nums[i];
            if(mp.find(key)!=mp.end() && mp.find(key)->second!=i)
            {
                index.push_back(i);
                index.push_back(mp[key]);
                break;
            }
        }
        return index;      
    }
};