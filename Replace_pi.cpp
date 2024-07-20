#include<iostream>
#include<string>
using namespace std;

void replacepi(string s)
{
	
	if(s.length()==0) //base case
	{
	return;
	}	
	
	if(s[0]=='p' && s[1]=='i') //decomposition
	{
		cout<< "3.142";
	replacepi(s.substr(2)); //composition
	
	}
	
	else
	{
		cout<< s[0];
	    replacepi(s.substr(1));
	}
	
}

int main()
{
	string str;
	cout<< "enter the string: ";
	getline(cin,str);
	replacepi(str);
}
