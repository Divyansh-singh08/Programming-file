#include<iostream>
using namespace std;
int main()
{
	int A[10]={2,5,6,3,15,21,202,25,28,30};
	int max=INT_MIN;
	for(auto x:A)
	{
		if(x>max)
		{
			max=x;
		}
	}
  cout<<max;
  return 0;
}
