#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cout << "Enter a text: ";
    cin >> word;
    int a = 0;
    int z = word.length() - 1;
    int P = 1;

    while (a < z)
    {
        if (word[a] != word[z])
        {
            P = 0;
            break;
        }
        a++;
        z--;
    }
    if (P == 1)
    {
        cout << "The word '" << word << "' is a Palindrome." << endl;
    }
    else 
    {
        cout << "The word '" << word << "' is not a Palindrome." << endl;
    }
    return 0;
}
