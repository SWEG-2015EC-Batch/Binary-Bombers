#include <iostream>
using namespace std;
int main() {
    int rows=4, columns=6;
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= columns; ++j) {
            cout << "* ";
        }
    cout << endl;
    }

    return 0;
}

