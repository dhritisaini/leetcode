#include<iostream>
#include<cstring>
 using namespace std;
 

 bool isLongPressedName(string &name, string &typed) {
     
 	if((name[0])=='\0'||(typed[0])=='\0')
 	{
 		return false;
 	}
  int idxname=0;
  int idxtyped=0;

  while(name[idxname]!='\0')
  {
  	if(typed[idxtyped]=='\0')
  		return false;

  	if(name[idxname]==typed[idxtyped])
  	{
  		idxtyped++;
  		idxname++;
  	}

  	else
  	{
  		if(idxname>0&&typed[idxtyped]!='\0'&&name[idxname-1]==typed[idxtyped])
  		{
  			idxtyped++;

  		}
  		else
  			return false;
  	}


  }
  if(typed[idxtyped]!='\0')
  {
  	for(int i=idxtyped;typed[i]!='\0';i++)
  	{
  		if(name[idxname-1]!=typed[i])
  			return false;
  	}
  }
 
 return true;
 
 }
 
 int main(int argc, char** argv){
     string name, typed;
     cin>>name>>typed;
 	 if(isLongPressedName(name, typed)){
         cout<<"true";
     }else{
         cout<<"false";
 }
}