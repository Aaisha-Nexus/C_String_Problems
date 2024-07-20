#include<iostream>
//find the length of a string using pointers

using namespace std;

int main()
{
	char text[100];
	char* string = text;
	
	cout<< "Enter the string: ";
	cin.getline (text,100);
    
    int count=0;
	while( *string!= '\0')
	{
	count++;
    string++;
}
	cout<< "The length of the string is: " << count << endl;
	return 0;
}
