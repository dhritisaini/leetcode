class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int low=0,mid;
        int high=nums.size()-1;
        while(low<high)
        {
            mid=low+((high-low)/2);
            int count=0;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]<=mid)
                    count++;
            }
            if(count>mid)
                high=mid;
            else
                low=mid+1;
        }
        return low;
    }
};