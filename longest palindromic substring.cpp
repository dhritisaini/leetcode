class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        if(n<=1)
            return s;
        int palLength=1,palStart=0;
        bool dp[n][n];
         for(int i=0;i<n;i++)
        {
             for(int j=0;j<n;j++)               
                dp[i][j]=false;
        }
        for(int i=0;i<n;i++)
        {
            dp[i][i]=true;
        }
        for(int start=n-1;start>=0;start--)
        {
            for(int end=start+1;end<n;end++)
            {
                if(s[start]==s[end])
                {
                    if(end-start==1 || dp[start+1][end-1]==true)
                    {
                        dp[start][end]=true;
                        if(palLength<end-start+1)
                        {
                            palStart=start;
                            palLength=end-start+1;
                        }
                    }
                }
            }
        }
        return s.substr(palStart,palLength);
    }
};