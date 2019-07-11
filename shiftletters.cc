#include<iostream>
#include<cstring>
 #include<vector>
 using namespace std;
 
 string shiftingLetters(string &S, vector<int> &shifts) {
     int total=0;

     for(int i=shifts.size()-1;i>=0;i--)
     {
         total=(total+shifts[i])% 26;
        
        if((S[i]+total)>'z')
        {
            S[i]+=total-26;
        }
         else
             S[i]+=total;
     }
return S;
 }
 
 int main(int argc, char** argv){
     string s;
     cin>>s;
     int N;
     cin>>N;
 
     vector<int> shifts(N);
 
     for (int i = 0; i < N; i++) {
         cin>>shifts[i];
     }
 
     cout<<shiftingLetters(s, shifts);
 }