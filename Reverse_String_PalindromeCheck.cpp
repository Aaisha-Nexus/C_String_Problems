a#include<iostream>
#include<string>
using namespace std;


void reversestring (string& s)
{
	int n= s.length();
	
	//swaping in reverse order
	for(int i=0;i<n/2;i++)
	{
		char temp = s[i];
		s[i]= s[n-i-1];
		s[n-i-1]=temp;	
	}
}

int main()
{
string str;
cout << "enter a string:\t";
getline(cin,str);
string orgstring=str;

cout<< "Reversed String:\t";
reversestring(str); 
 cout << str <<endl;
 
 if(orgstring==str)
 {
 	cout<< "it is a string palindrome";
 }
 else
 {
 	cout <<"it is not a palindrome";
 }

return 0;
}

