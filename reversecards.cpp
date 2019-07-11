#include<iostream>
 #include<vector>
#include<queue>
 #include<string>
#include<algorithm>
 using namespace std;

 vector<int> deckRevealedIncreasing(vector<int>& nums) {
    vector<int> res(nums.size(),0);
    sort(nums.begin(),nums.end());
    queue<int> q;
    for(int i=0;i<nums.size();i++)
    {
        q.push(i);
    }
    for(int i=0;i<nums.size();i++)
    {
        res[q.front()]=nums[i];
        q.pop();
        q.push(q.front());
        q.pop();
    }
return res;
}
 
 int main(int argc,char** argv){
     int n;
     cin>>n;
     vector<int> Input(n);
     for(int i=0;i<n;i++){
         cin>>Input[i];
     }
     vector<int> ans = deckRevealedIncreasing(Input);
     for (int i=0;i<ans.size();i++) {
         cout<<ans[i]<<" ";
     }
 
 }