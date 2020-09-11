#include<iostream>
using namespace std;
int main()
{
	int A[10]={2,3,4,5,6,8,10,11,12,15};
	int low=0,heigh=9,key,mid;
	cin>>key;
	while(low<=heigh)
	{
		mid=(low+heigh)/2;
		if(key==A[mid])
		{
			cout<<mid;
			exit(0);
		}
		else if(key<A[mid])
			heigh=mid-1;
	    else
			low=mid+1;
	}
	cout<<"Element not found";
	return 0;
}
