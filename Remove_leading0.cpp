// C++ program to remove leading zeros using recursion
// from a given string 
#include <iostream> 
#include<string>

using namespace std; 

string removeZero(string str) 
{ 
	// Count leading zeros 
	if(str.empty())
	return str;
	
	if (str[0] == '0') //if first index is 0 then perform removingzero func on the rest of the string
        return removeZero(str.substr(1));
    
    // If the first character is not '0', return the string as it is
    return str;

	return str; 
} 

// Driver code 
int main() 
{ 
	string str; 
	cout << "enter the number: " << endl;
	getline(cin,str);
	str = removeZero(str); 
	cout << "Number after removing leading zeroes: " << str << endl; 
	return 0; 
}


// if simply using itertaion can use s.erase() function to remove like s.erase(0,i) means remove 0 till the end of string
// C++ program to remove leading zeros 
// from a given string 
//#include <iostream> 
//
//using namespace std; 
//
//string removeZero(string str) 
//{ 
//	// Count leading zeros 
//	int i = 0; 
//	while (str[i] == '0') 
//		i++; 
//
//	// The erase function removes i characters 
//	// from given index (0 here) 
//	str.erase(0, i); 
//
//	return str; 
//} 
//
//// Driver code 
//int main() 
//{ 
//	string str; 
//	str = "00000123569"; 
//	str = removeZero(str); 
//	cout << str << endl; 
//	return 0; 
//}
//

