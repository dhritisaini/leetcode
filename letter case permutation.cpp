class Solution {
public:
    void helper(string S,vector<string>& v,int i)
    {
        if(i==S.size())
        {
            v.push_back(S);
            return;
        }
        if(S[i]>='a'&& S[i]<='z')
        {
            helper(S,v,i+1);
            S[i]+= 'A'-'a';
            helper(S,v,i+1);
        }
        else if(S[i]>='A'&& S[i]<='Z')
        {
            helper(S,v,i+1);
            S[i]+= 'a'-'A';
            helper(S,v,i+1);
        }
        else            
        {
            helper(S,v,i+1);
        }
        
    }
    vector<string> letterCasePermutation(string S) {
        
        vector<string> v;
        helper(S,v,0);
        return v;
    }
};