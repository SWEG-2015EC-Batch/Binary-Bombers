#include <iostream>
using namespace std;

int main()
{
    int array[3][4]={{1, 2, 3},{4, 5, 6,7}};
    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << array[i][j] << "\t";
        }
        cout << "\n";
    }

    
    cout << "\nMultiplication of Row Elements:\n";
    for (int i = 0; i < 3; ++i) {
        int rowProduct = 1;
        for (int j = 0; j < 3; ++j) {
            rowProduct *= array[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowProduct << "\n";
    }

    cout << "\nSum of Column Elements:\n";
    for (int j = 0; j < 4; ++j) {
        int colSum = 0;
        for (int i = 0; i < 3; ++i) {
            colSum += array[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << "\n";
    }



    return 0;
}
