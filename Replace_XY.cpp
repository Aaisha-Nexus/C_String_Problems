#include<iostream>
#include<string>
using namespace std;
//changeXY("codex") ? "codey"
//changeXY("xxhixx") ? "yyhiyy"
//changeXY("xhixhix") ? "yhiyhiy"

string repwithy(string s)
{
	//base case
	if(s.length()==0) //basecase
	{
		return "";
	}
	
	char ch=s[0]; //decomposition
	string rest=s.substr(1);
	
	if(ch=='x')
	{
		cout << "y"; //composition
		return repwithy(rest);
	}
	else
	     cout << s[0];
	     return repwithy(rest);
}
int main()
{
	string str;
	cout<< "enter the string: ";
	getline(cin,str);
	cout << repwithy(str);
}
