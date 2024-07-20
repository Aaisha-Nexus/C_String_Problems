#include<iostream>
#include<string>
#include<algorithm> // For std::sort
using namespace std;


bool isanagram(string s1, string s2)
{
	if(s1.length()!=s2.length())
		return false;
	
	sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1==s2;
}

int main() 
{
    string str1, str2;
    cout << "Input the first string: ";
    getline(cin, str1);
    cout << "Input the second string: ";
    getline(cin, str2);
    
    if(isanagram(str1,str2))
    {
    cout << "strings are anagram of each other";
	}
	else 
	{
	cout<< "strings are not anagram of each other";	
	}
    
    
    
    return 0;
}

