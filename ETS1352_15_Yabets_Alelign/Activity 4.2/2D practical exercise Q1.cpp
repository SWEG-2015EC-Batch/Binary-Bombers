#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    bool areArraysIdentical = true;
    int array1[size] = {1, 2, 3, 4, 5};
    int array2[size] = {1, 2, 3, 4, 5};

    if (array1[size]!=array2[size]) {
        cout << "Arrays are identical."<<endl;
    } else {
        cout << "Arrays are not identical."<<endl;
    }

    return 0;
}
