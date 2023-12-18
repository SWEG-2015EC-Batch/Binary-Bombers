#include <iostream>
using namespace std;
int main() {
    int length=4, width=6;
    char currentLetter = 'A';
    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << currentLetter << " ";
            ++currentLetter;
            if (currentLetter > 'X') {
                break;
            }
        }
        cout << "\n";
        if (currentLetter > 'X') {
            break;
        }
    }
    return 0;
}

