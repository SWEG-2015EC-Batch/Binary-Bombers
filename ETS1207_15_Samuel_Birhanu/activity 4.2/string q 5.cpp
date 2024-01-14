#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int vowelCount = 0;
    int consonantCount = 0;
    int digitCount = 0;
    int specialCharCount = 0;

    for (char ch : input) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        } else if (isdigit(ch)) {
            digitCount++;
        } else {
            specialCharCount++;
        }
    }

    cout << "Frequency of vowels: " << vowelCount << endl;
    cout << "Frequency of consonants: " << consonantCount << endl;
    cout << "Frequency of digits: " << digitCount << endl;
    cout << "Frequency of special characters: " << specialCharCount << endl;

    return 0;
}


