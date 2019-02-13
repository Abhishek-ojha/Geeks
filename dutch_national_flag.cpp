#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
	//code
	int index=0,cases,low,mid,high,size;
	cin>>cases;
	while(index<cases)
	{
	    cin>>size;
	    vector<int>arr(size);
	    for(low=0;low<size;low++)
	        cin>>arr[low];
	    low=0;mid=0;high=size-1;
	    while(mid<=high)
	    {
	        if(arr[mid]==0)
	        {
	            swap(&arr[mid++],&arr[low++]);
	        }
	        else if(arr[mid]==1)
	            mid++;
	        else
	            swap(&arr[mid],&arr[high--]);
	    }
	    for(low=0;low<size;low++)
	        cout<<arr[low]<<" ";
	    cout<<endl;
	    index++;
	}
	return 0;
}
