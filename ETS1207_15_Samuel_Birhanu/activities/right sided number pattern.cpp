#include <iostream>
using namespace std;
int main() {
    int n=5;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << "  ";
        }
        for (int k = i; k >= 1; --k) {
            cout << k << " ";
        }

        cout <<endl;
    }

    return 0;
}

