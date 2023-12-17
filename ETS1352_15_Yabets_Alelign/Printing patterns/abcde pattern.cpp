#include <iostream>
using namespace std;
int main() {
    int rows=5, columns=5;
    char letters[] = {'a', 'b', 'c', 'd', 'e'};
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << letters[j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
