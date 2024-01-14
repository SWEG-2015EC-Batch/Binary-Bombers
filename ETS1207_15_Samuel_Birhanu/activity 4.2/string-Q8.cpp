#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    cout << "Enter a line of text: ";
    string text;
    cin>>text;
    cout << "Uppercase: ";
    for (char& c : text) {
        cout << static_cast<char>(toupper(c));
    }
    cout << endl;
    cout << "Lowercase: ";
    for (char& c : text) {
        cout << static_cast<char>(tolower(c));
    }
    cout << endl;

    return 0;
}

