#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"enter the year";
	cin>>year;
	if(year%4==0)
	 {
	 	if(year%100==0)
	 	{
	 		if(year%400==0)
	 		cout<<"leap year\n"<<year;
	 		else
	 		cout<<"not a leap year\n"<<year;
		 }
		 else
		 cout<<"laep year\n"<<year;
	 }
	 else
	 cout<<"not a leap year\n"<<year;
	 
return 0;
}
