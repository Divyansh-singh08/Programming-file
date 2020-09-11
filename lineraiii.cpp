#include<iostream>
using namespace std;
int main()
{
	int A[10],key;
	cout<<"enter the element\n"<<endl;
	for(int i=0;i<9;i++)
	{
		cin>>A[i];
	}
	cout<<"Enter the want element\n";
	cin>>key;
	for(int i=0;i<9;i++)
	{
		if(key==A[i])
		{
			cout<<"found element\n"<<i;
			exit(0);
		}
	
	}
		cout<<"not found element\n"<<endl;
	    return 0;
}
