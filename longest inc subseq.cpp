class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        
        vector<int> lis(nums.size(),1);
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j])
                {
                    lis[i]=max(lis[i],1+lis[j]);
                }
            }
        }
        int ans=0;
        for(int i=0;i<lis.size();i++)
        {
            ans=max(ans,lis[i]);
        }
        return ans;
    }
};