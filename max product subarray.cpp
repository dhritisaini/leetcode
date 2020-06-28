class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxval=nums[0];
        int minval=nums[0];
        int maxp=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<0)
                swap(maxval,minval);
            
            maxval=max(nums[i],maxval*nums[i]);
            minval=min(nums[i],minval*nums[i]);
            
            maxp=max(maxp,maxval);
        }
        return maxp;
    }
};