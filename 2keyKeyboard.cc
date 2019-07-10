#include<iostream>
 #include<vector>
 using namespace std;
 
 int _2KeysKeyboard(int n) {

 	int ans=0;
 	int fact=2;

 	while(n%2==0)
 	{
 		ans+=2;
 		n/=2;
 	}

 	fact=3;
 	while(fact*fact<=n)
 	{
 		while(n%fact==0)
 		{
 			ans+=fact;
 			n/=fact;
 		}
 		fact+=2;
 	}

 	ans+=(n==1)?0:n;
 	return ans;
     
 }
 
 int main(int argc,char** argv){
 
     int n;
     cin>>n;
     cout<<_2KeysKeyboard(n)<<endl;
 }
