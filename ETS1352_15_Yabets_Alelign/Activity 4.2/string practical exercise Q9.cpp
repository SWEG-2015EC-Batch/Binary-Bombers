#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int MaxNameLength = 20;
    char FirstShow[20] = "Bojack Horseman";
    char SecondShow[20];
    strcpy(SecondShow, "AOT");
    cout << "Your two most favorite television programs are " << FirstShow << " and " << SecondShow << endl;
    return 0;
}
