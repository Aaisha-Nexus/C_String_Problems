#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main ()
{
	int n;
	cout<< "no of elements:" << endl;
	cin >> n;
	cin.ignore();
	cout<< "enter the words:" << endl;
	string str[n];
	for(int i=0;i<n;i++)
	{
	   getline(cin,str[i]);
	}
	
	
	sort(str, str + n);
	
	cout<< " Words In lexicographical order:\n";
	
	for(int i=0;i<n;i++)
	{
	   cout <<str[i] << endl;
	}

	return 0;
	
	
}
