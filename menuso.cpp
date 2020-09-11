//meanu driven programe 
#include<iostream>
using namespace std;
int main()
{
	cout<<"Menu\n";
	cout<<"1.ADD\n"<<"2.SUB\n"<<"3.MULTI\n"<<"4.DIV\n";
	int option;
	cout<<"Enter your choice:";
	cin>>option;
	int a,b,c;
	cout<<"Enter the two number-:";
	cin>>a>>b;
	switch(option)
	{
		case 1:c=a+b;
		break;
		case 2:c=a-b;
		break;
		case 3:c=a*b;
		break;
		case 4:c=a/b;
		break;
		case 5:cout<<"out of case";
		break;
	}
	cout<<c;
	return 0;
}
