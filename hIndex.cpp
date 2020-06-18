class Solution {
public:
    int hIndex(vector<int>& citations) {
        if(citations.size()==0)
            return 0;
        int n=citations.size();
        vector<int> hash(n+1,0);
        for(int i=0;i<n;i++)
        {
            if(citations[i]>n)
                hash[n]++;
            else
            {
                hash[citations[i]]++;
            }
        }
        int p=0;
        for(int i=n;i>=0;i--)
        {
            p+=hash[i];
            if(p>=i)
                return i;
        }
       return 0; 
    }
};