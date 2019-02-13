#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int cases,index=0,i,size,sum,flag;
	cin>>cases;
	while(index<cases)
	{
	    cin>>size;
	    vector<int>arr(size);
	    for(i=0;i<size;i++)
	        cin>>arr[i];
        //cout<<arr[1]<<endl;
        vector<int>res(size);
        sum=0;
        flag=0;
        for(i=0;i<size;i++)
        {
            sum+=arr[i];
            res[i]=sum;
        }
       // cout<<res[1]<<endl;
        if(size==1)
            cout<<"1"<<endl;
        else
        {
            for(i=1;i<size;i++)
            {
                //cout<<res[i-1]<<" "<<res[i]<<" "<<res[size-1]<<endl;
                if(res[i]-arr[i]==res[size-1]-res[i])
                    {
                        cout<<i+1<<endl;
                        flag=1;
                        break;
                    }
                    
            }
            if(flag==0)
                cout<<"-1"<<endl;
        }
        index++;
	}
	return 0;
}
