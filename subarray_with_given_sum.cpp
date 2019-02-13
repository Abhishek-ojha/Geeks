#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int cases,index=0,size,i=0,x,sum=0,j,flag=0;
	cin>>cases;
	while(index<cases)
	{
	    cin>>size;
	    cin>>x;
	    vector<int>arr(size);
	    for(i=0;i<size;i++)
	        cin>>arr[i];
	    i=0,j=1;
	    sum=arr[0];
	    flag=0;
	    while(j<=size)
	    {
	        while(sum>x && i<j-1)
	        {
	            sum=sum-arr[i];
	            i++;
	        }
	        if(sum==x)
	        {
	            cout<<i+1<<" "<<j<<endl;
	            flag=1;
	            break;
	        }
	        if(j<size)
	            sum=sum+arr[j];
	        j++;
	            
	    }
	    if(flag==0)
	        cout<<"-1"<<endl;
	    index++;
	}
	return 0;
}
