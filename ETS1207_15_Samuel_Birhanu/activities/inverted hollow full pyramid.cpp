#include <iostream>
using namespace
int main() {
    int rows=6;
    for (int i = rows; i >= 1; --i) {
        for (int space = 1; space <= rows - i; ++space) {
            std::cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            if (j == 1 || j == 2 * i - 1 || i == rows) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout <<endl;
    }

    return 0;
}

