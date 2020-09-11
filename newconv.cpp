//count the no of vowel consonents and words by using string iterators:-
#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout<<"Enter the string "<<endl;
	int vowels=0,upperconsonents=0,lowerconsonents=0,space=0,word=0;
	string t;
	getline(cin,t);
	for(int i=0;t[i]!='\0';i++)
	{
		if(t[i]=='A'|| t[i]=='E' || t[i]=='I' || t[i]=='O' || t[i]=='U'|| 
		   t[i]=='a' || t[i]=='e' || t[i]=='i' || t[i]=='o'|| t[i]=='u')
	
		   	vowels++;
		   	
		else if(t[i]>=65 && t[i]<=90) 

	          lowerconsonents++;
	          
		else if(t[i]>=97 && t[i]<=122)

		     upperconsonents++;
		         
		else if(i==0 || t[i-1]!=' ')
		space++;
	}
	cout<<"vowels are:-\n"<<vowels<<endl;
	cout<<"upperconsonents\n"<<upperconsonents<<endl;
	cout<<"lowerconsonents\n"<<lowerconsonents<<endl;
	cout<<"space\n"<<space<<endl;
	return 0;
}
