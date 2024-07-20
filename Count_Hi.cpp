#include <iostream>
#include <string>

using namespace std;


// Function to count the number of times "hi" appears in the string
// excluding cases where 'x' is immediately before "hi"
int countHi(string s) {
    // Base case
    if(s.length() < 2) {
        return 0;
    }
    
    // If 'x' is immediately before "hi", skip it and continue recursion
    if(s[0] == 'x' && s[1] == 'h') {
        return countHi(s.substr(2));
    }
    
    // If "hi" is found, increment count and continue recursion
    if(s.substr(0, 2) == "hi") {
        return 1 + countHi(s.substr(1));
    }
    
    // Otherwise, continue recursion
    return countHi(s.substr(1));
}

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << countHi(str);
    return 0;
}

