#include <iostream>
 #include <vector>
 #include <stack>
 
 using namespace std;
 
vector<int> findWarmerTemp(vector<int> temps )
{
     stack<int> st;
     vector <int> nge(temps.size(),0);

     for(int i=temps.size()-1;i>=0;i--)
     {
        while(!st.empty()&&temps[i]>temps[st.top()])
        {
            st.pop();
        }
        nge[i]=(st.empty())?0:st.top()-i;
        st.push(i);
     }
     return nge;
}
  
 
 int main()
 {
     int n = 0;
     cin >> n;
     vector<int> temps(n, 0);
     for(int i=0; i<n; i++)
     {   
         int a=0; 
         cin >> temps[i];
     }
     vector<int> res = findWarmerTemp(temps);
     for(int i=0; i<res.size(); i++)
     {
         cout << res[i] << endl;
     }
     return 0;
 }
