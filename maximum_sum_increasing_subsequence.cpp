#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int cases,index=0,size,i,j;
	cin>>cases;
	while(index<cases)
	{
	    cin>>size;
	    vector<int>arr(size);
	    for(i=0;i<size;i++)
	        cin>>arr[i];
	    vector<int>msis(size);
	    for(i=0;i<size;i++)
	        msis[i]=arr[i];
	        
	   for(i=1;i<size;i++)
	   {
	       for(j=0;j<i;j++)
	       {
	           if(arr[i]> arr[j] && msis[i]<msis[j]+arr[i]) //if it is an increasing oreder and adding it will increase the current max sum
	                msis[i]=msis[j]+arr[i];
	       }
	   }
	   int max=INT_MIN;
	   for(i=0;i<size;i++)
	        if(max<msis[i])
	            max=msis[i];
	   cout<<max<<endl;
	   index++;
	}
	return 0;
}
