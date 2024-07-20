#include<iostream>
#include<string.h>
using namespace std;

int main() {
    char str[100];
    cout << "input the string: ";
    cin.getline(str, 100);

    char vowel[] = {'a', 'e', 'i', 'o', 'u'};
    int length = strlen(str); // Use strlen function to get the length of the string

    int countvowel = 0;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < 5; j++) {
            if (str[i] == vowel[j]) {
                countvowel++;
            }
        }
    }

    cout << "the vowels in \"" << str << "\" are: " << countvowel << endl;
    return 0;
}

