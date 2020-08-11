class Solution {
public:
    int titleToNumber(string s) {
        int power=0;
        int ans=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            ans+=(s[i]-'A'+1)*(pow(26,power++));
        }
        return ans;
    }
};