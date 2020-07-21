class Solution {
public:
    int trap(vector<int>& height) {
        
        int n=height.size();
        if(!n)
            return 0;
        int left[n];
        int right[n];
        
        left[0]=height[0];
        for(int i=1;i<n;i++)
        {
            if(left[i-1]<height[i])
                left[i]=height[i];
            else
                left[i]=left[i-1];
        }
        right[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(right[i+1]<height[i])
                right[i]=height[i];
            else
                right[i]=right[i+1];
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+= min(left[i],right[i])-height[i];
        }
        return ans;
    }
};