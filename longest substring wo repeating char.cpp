class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mp;
        int len=0, begin=-1;
        for(int i=0;i<s.length();i++)
        {
            if(mp.count(s[i])!=0)
            {
                begin=max(begin,mp[s[i]]);
            }
            mp[s[i]]=i;
            len=max(len, i-begin);
        }
        return len;
    }
};