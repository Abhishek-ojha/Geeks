#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int cases,index=0,i,max_so_far,max_ending_here,size;
	cin>>cases;
	while(index<cases)
	{
	    cin>>size;
	    vector<int>arr(size);
	    for(i=0;i<size;i++)
	        cin>>arr[i];
	    max_so_far=arr[0];
	    max_ending_here=arr[0];
	    for(i=1;i<size;i++)
	    {
	        max_ending_here=max(arr[i],max_ending_here+arr[i]);
	        max_so_far=max(max_so_far,max_ending_here);
	    }
	    cout<<max_so_far<<endl;
	    index++;
	}
	return 0;
}
