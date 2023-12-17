#include <iostream>
using namespace std;
int main() {
    int rows=5, columns=5;
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= columns; ++j) {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}

