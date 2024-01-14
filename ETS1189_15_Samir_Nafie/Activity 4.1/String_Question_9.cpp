#include <iostream>
#include <cstring>
using namespace std;
int main() {
    const int maxProgramNameLength = 20;
    char firstProgram[20] = "prison break";
    char secondProgram[20];
    strcpy(secondProgram, "Mr.robot");
    cout << "My Two Favorite Television Programs:\n";
    cout << "1. " << firstProgram <<endl;
    cout << "2. " << secondProgram <<endl;

    return 0;
}
