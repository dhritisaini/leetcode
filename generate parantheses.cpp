class Solution {
public:
    vector<string> generateParenthesis(int n) {
         vector<string> v;
        helper(v, "", n, n);
        return v;
    }
    void helper(vector<string> & res, string str, int left, int right){
        if(left == 0 && right == 0){
            res.push_back(str);
            return;
        }
        if(left > 0) helper(res, str + "(", left - 1, right);
        if(right > left) helper(res, str + ")", left, right - 1);
        
    }
};
//'left' represents how many left parentheses remain, 'right' represents how many right parentheses remain