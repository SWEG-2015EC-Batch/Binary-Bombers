#include <iostream>
using namespace std;
int main() {
    char input;
    cout << "Enter a character: ";
    cin >> input;
    if (islower(input)) {
        cout << "The character is in lowercase." <<endl;
    } else if (isupper(input)) {
        cout << "The character is in uppercase." <<endl;
    } else if (isdigit(input)) {
        int number = input - '0';//converte a character digit (input) into its corresponding integer value.
        cout << "It's a digit."<<endl;
        if (number % 2 == 0) {
        cout << " It's an even number." <<endl;
        } else {
        cout << " It's an odd number." <<endl;
        }
    } else {
        cout << "It's a special character." <<endl;
    }
    if (isalpha(input)) {
        char lowercaseChar = tolower(input);

        if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' ||
            lowercaseChar == 'o' || lowercaseChar == 'u') {
            cout << "It's a vowel." <<endl;
        } else {
            cout << "It's a consonant." <<endl;
        }
    }

    return 0;
}
