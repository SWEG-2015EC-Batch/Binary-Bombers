#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string word, text = "";
    cout << "Enter a word: ";
    cin >> word;
    for (int i = 0; i < word.length(); i++) 
    {
        char c = word[i];
        if (isalpha(c))
        {
            text += c;
        }
    }
    cout << "The string after removing non-alphabet characters: " << text << endl;
    return 0;
}