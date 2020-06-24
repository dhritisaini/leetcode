#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> codes={".","abc","def","ghi","jkl","mno","pqr","st","uvwx","yz"};

vector<string> getKeyCombinations(string str)
{
    if(str.length()==0)
    {
        vector<string> br;
        br.push_back("");
        return br;
    }

	char ch=str[0];
	string s=str.substr(1);
	vector<string> rr=getKeyCombinations(s);
	vector<string> myres;

	for(int i=0;i<rr.size();i++)
	{
		string chcd=codes[ch-'0'];
		for(int j=0;j<chcd.length();j++)
		{
			myres.push_back(chcd[j]+rr[i]);
		}
	}
return myres;
}

int main()
{
	string str;
	cin>>str;
	vector<string> res=getKeyCombinations(str);
	for(int i=0;i<res.size();i++)
	{
		cout<<res[i]<<endl;
	}
}