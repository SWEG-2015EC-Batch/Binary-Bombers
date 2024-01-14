#include<iostream>
using namespace std;
int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);
    int freq[256] = {0};
    for (int b= 0;b< text.length();b++)
    {
        freq[(int)text[b]]++;
    }
    int z=-1,a=text.length() + 1;
    char Z, A;

    for (int b=0;b<256;b++) {
        if (freq[b]> z) {
            z = freq[b];
            Z = (char)b;
        }
        if (freq[b]!= 0 && freq[b] < a)
        {
            a = freq[b];
            A = (char)b;
        }
    }
    cout << "The character with the largest frequency: " << Z << " (" << z << " times)" << endl;
    cout << "The character with the smallest frequency: " << A << " (" << a << " times)" << endl;
    return 0;
}
