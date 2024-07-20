#include<iostream>
#include<string>
using namespace std;
 
 

 string removeX(string s)
 {
 
 
     if(s.empty()) //base case
     return s;
    
    
    char first_char = s[0]; //decomposition factor
    string rest=s.substr(1); //it takes argument after the first index till the end of string by default bcz of single argument

    
    if(first_char== 'x') //composition factor
        return removeX(rest);  //process the rest of the string to remove all occurrences of 'x' without the first character
    else
        return first_char+ removeX(rest); //append the first character with the rest of remaining string if x is not first character
    }
        
        int main()
        {
        string str;
        cout<< "enter the string: ";
        getline(cin,str);
        
        cout << "String after removing x: " << removeX(str) << endl;
        
        return 0;
        
    }
     

////remove x from string
//    string removeX(string s)
// {
// 
// 
//     if(s.empty()) //base case
//     return s;
//    
//    
//    char first_char = s[0]; //decomposition factor
//    string rest=s.substr(1); //it takes argument after the first index till the end of string by default bcz of single argument
//
//    
//    if(first_char== 'x') //composition factor
//        return removeX(rest);  //process the rest of the string to remove all occurrences of 'x' without the first character
//    else
//        return first_char+ removeX(rest); //append the first character with the rest of remaining string if x is not first character
//    }
//    
//    //remove y from string
//    string removey(string s1)
// {
// 
// 
//     if(s1.empty()) //base case
//     return s1;
//    
//    
//    char first_char = s1[0]; //decomposition factor
//    string rest=s1.substr(1); //it takes argument after the first index till the end of string by default bcz of single argument
//
//    
//    if(first_char== 'y') //composition factor
//        return removey(rest);  //process the rest of the string to remove all occurrences of 'x' without the first character
//    else
//        return first_char+ removey(rest); //append the first character with the rest of remaining string if x is not first character
//    }

