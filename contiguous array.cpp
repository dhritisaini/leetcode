class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

        int sum=0;
        int len=0;
        unordered_map<int,int> m;
        m[0]=-1;
        
        for(int i=0;i<nums.size();i++)
        {
            sum= sum+ ((nums[i]==1)?1:-1);
            
            if(m.find(sum)!=m.end())
            {
                len=max(len,i-m[sum]);
            }
            else
                m[sum]=i;
        }
        return len;
    }
};