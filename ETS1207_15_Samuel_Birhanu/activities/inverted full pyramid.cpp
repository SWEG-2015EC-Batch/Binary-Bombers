#include <iostream>
using namespace std;
int main() {
    int rows=6;
    for (int i = rows; i >= 1; --i) {

        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << "* ";
        }
        cout <<endl;
    }

    return 0;
}

