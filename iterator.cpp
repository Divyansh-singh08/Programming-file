//Find the length of the string:-
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cout<<"Entaer tha name:";
	getline(cin,str);
	string::iterator me;
	for(me=str.begin();me!=str.end();me++)
	{
		cout<<me<<endl;
		*me+=32;
	}
	cout<<str<<endl;
	return 0;
}
