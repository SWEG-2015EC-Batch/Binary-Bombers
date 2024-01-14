#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of names: ";
    cin >> n;
    string names[n];
    cout << "Enter the names: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }
    sort(names, names + n);
    cout << "The names in alphabetical order are: " << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }
    return 0;
}
