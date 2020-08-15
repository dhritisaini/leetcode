class Solution {
public:
    bool checkValidString(string s) {
        int pmin=0,pmax=0;
        for(char c:s)
        {
            if(c=='(')
            {
                pmin++;
                pmax++;
            }
            else if(c==')')
            {
                pmin--;
                pmax--;
            }
            else
            {
                pmin--;
                pmax++;
            }
        pmin=max(pmin,0);
        if(pmax<0)
            return false;
        }
        return pmin==0;
    }
};