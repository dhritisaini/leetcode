#include<iostream>
 #include<vector>
#include<climits>
 using namespace std;

 void display(vector<int> &arr) {
     for (int i = 0; i < arr.size(); i++) {
         cout<<arr[i]<<" ";
     }
     cout<<endl;
 }
 
 int findUnsortedSubarray(vector<int> &a) {
   int maxi=INT_MIN;
    int end=-2;
    for(int i=0;i<a.size();i++)
    {
        maxi=max(maxi,a[i]);
        if(a[i]<maxi)
        {
            end=i;
        }
    }

    int mini=INT_MAX;
    int start=-1;
    for(int i=a.size()-1;i>=0;i--)
    {
        mini=min(mini,a[i]);
        if(a[i]>mini)
        {
            start=i;
        }
    }
    return end-start+1; 
 }
 
 int main(int argc, char** argv){
     int length;
     cin>>length;
     vector<int> arr(length);
 
     // Input for elements of array.
     for (int i = 0; i < arr.size(); i++) {
         cin>>arr[i];
     }
 
     cout<<findUnsortedSubarray(arr);
 
 }