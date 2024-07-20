#include<iostream>
#include<string>
#include<algorithm> 
using namespace std;

bool Ispangram(string s)
{
	bool mark[26]={false};
	int index;
	
	for(int i=0; i<s.length();i++)
	{
		if('A'<= s[i] && 'Z'>=s[i])
		index = s[i]-'A';
		
		else if('a'<= s[i] && 'z'>=s[i])
		index = s[i]-'a';
		
		else 
		continue;
		
		mark[index]=true;
	}
	
	for(int i=0;i<=25;i++)
	if(mark[i]==false)
	return (false);
	
	return (true);
	
}

int main()
{
	string str;
	cout<< "Enter the sentence:\t";
	getline(cin,str);
	
	if(Ispangram(str))
	{
		cout << " It is a pangram ";
	}
	else 
	{
		cout << "It is not a pangram";
	}
	return 0;
	
}
