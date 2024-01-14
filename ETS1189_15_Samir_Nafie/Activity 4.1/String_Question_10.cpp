#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char pass[12] = "password123";
    char input[12];
     f:
    cout << "Enter the password: ";
    cin >> input;

    for(int i=0;i<12;i++){
      if (input[i]!=pass[i]) {
        cout << "incorrect password!" << endl;
        goto f;
    }

    }
    cout << "correct password!" << endl;


    return 0;
}
