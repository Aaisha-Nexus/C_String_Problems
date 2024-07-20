#include<cstring>
#include <iostream>
#include <string>

using namespace std;

string get_filling(string text)
 {

  int first_bread = text.find("bread");
  if (first_bread == -1) 
  {
    return "";
  }
  int last_bread = text.rfind("bread");
  if (first_bread == last_bread) {
    return "";
  }
  return text.substr(first_bread + strlen("bread"), last_bread - (first_bread + strlen("bread")));
}

int main() {
  string input;
  cout << "Enter the text: ";
  getline(cin, input);

  string filling = get_filling(input);

  if (filling.empty()) {
    cout << "There is no filling between the bread." << endl;
  } else {
    cout << "The filling is: " << filling << endl;
  }

  return 0;
}



    
   
