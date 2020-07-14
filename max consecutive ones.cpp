class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int pre=0;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
                pre+=nums[i];
            else
                pre=0;
            
            ans=max(ans,pre);
        }
        return ans;
    }
};