#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char pass[10] ="Eren@1289";
    char input[10];
     f:
    cout << "Please enter the password: ";
    cin >> input;

    for(int a=0;a<10;a++){
      if (input[a]!=pass[a]) {
        cout << "the password you typed is incorrect!" << endl;
        goto f;
    }

    }
    cout << "welcome!" << endl;


    return 0;
}
