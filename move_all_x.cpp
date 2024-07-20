#include<iostream>
#include<string>
using namespace std;

string moveallx(string s)
{
	
	if(s.length()==0) //base case
	{
	return "";
	}	
	
	char ch=s[0];
	string ans=moveallx(s.substr(1)); //decomp
     
    
	if(ch=='x')
	{
      return ans+ch; //composition 
}
	
	else
	{
			return ch+ans;
	}
}
	
	int main()
{
	string str;
	cout<< "enter the string: ";
	getline(cin,str);
	cout << moveallx(str);
	
	return 0;
}
