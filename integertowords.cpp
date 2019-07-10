#include<iostream>
#include<vector>
#include<cstring>
 using namespace std;
 
 // -----------------------------------------------------
 // This is a functional problem. Do not modify main
 // This function takes as input an integer num
 // It should return required output.
  vector<string> lessthan20={"","One","Two","Three",  "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
 	 vector<string> tens={"","Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
 	 vector<string> thousands={"","Thousand","Million","Billion"};

 string numberToWords(int num) {
 	if(num==0)
 	{
 		return "Zero";
 	}
 	int i=0;
 	string res="";

 	while(num>0)
 	{
 		if(num%1000!=0)
 		{
 			res=helper(num%1000)+thousands[i]+" "+res;
 		}
 			num=num/1000;
 			i++;
 		
 	}
return res;
}

string helper(int n)
{
	if(n==0)
	{
		return "";
	}
	else if(n<20)
	{
		return lessthan20[n]+" ";
	}
	else if(n<100)
	{
		return tens[n/10]+" "+helper(n%10);
	}
	else
	{
		return lessthan20[n/100]+" Hundred "+helper(n%100);
	}

}


 int main(int argc, char** argv){
     int num;
     cin>>num;
 	 cout<<numberToWords(num);
 }

 string helper(int n)
 {
 	if(n==0)
 	{
 		return "";
 	}
 	if (n<20)
 }