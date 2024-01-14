#include <iostream>
using namespace std
int main() {
    int length, width;
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the width: ";
    cin >> width;
    if (length <= 0 || width <= 0) {
        cout << "Invalid input. Please enter positive values for length and width.\n";
        return 1;

    int initialNumber = 10;
    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << initialNumber << " ";
            ++initialNumber;
            if (initialNumber > 49) {
                break;
            }
        }
        cout << "\n";

        if (initialNumber > 49) {
            break;
        }
    }

    return 0;
}

