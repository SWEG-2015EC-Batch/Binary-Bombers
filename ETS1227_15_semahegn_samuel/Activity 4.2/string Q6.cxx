#include <iostream>
using namespace std;

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);
    int freq[256] = {0};
    for (int i = 0; i < text.length(); i++)
    {
        freq[(int)text[i]]++;
    }

    int z = -1, a = text.length() + 1;
    char Z, A;

    for (int i = 0; i < 256; i++) {
        if (freq[i] > z) {
            z = freq[i];
            Z = (char)i;
        }
        if (freq[i] != 0 && freq[i] < a)
        {
            a = freq[i];
            A = (char)i;
        }
    }
    cout << "Character with largest frequency: " << Z << " (" << z << " times)" << endl;
    cout << "Character with smallest frequency: " << A << " (" << a << " times)" << endl;
    return 0;
}
