#include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;

 
 vector<int> sortTransformedArray(vector<int>& nums, int a, int b, int c) {
    vector<int> res(nums.size());
    int start=0;
    int end=nums.size()-1;
    int index=0;

    if(a>=0)
    {
        index=end;
    }

    while(start<=end)
    {
        int sans=(a*nums[start]*nums[start])+(b*nums[start])+c;
        int eans=(a*nums[end]*nums[end])+(b*nums[end])+c;
        if(a>=0)
        {
            if(sans>=eans)
            {
                res[index]=sans;
                start++;
                index--;
            }
            else{
                res[index]=eans;
                end--;
                index--;
            }
        }
        else
        {
            if(sans<eans)
            {
                res[index]=sans;
                start++;
                index++;
            }
            else
            {
                res[index]=eans;
                end--;
                index++;
            }
        }
    }
    return res;
 }
 
 
 int main(int argc,char** argv){
         int n;
         cin>>n;
         vector<int> nums(n);
         for(int i=0;i<n;i++){
             cin>>nums[i];
         }
         sort(nums.begin(),nums.end());
         int a,b,c;
         cin>>a>>b>>c;
         vector<int> res;
         res=sortTransformedArray(nums, a, b, c);
         for(int i=0;i<res.size();i++)
             cout<<res[i]<<" ";
 }