#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    string t = "";
    cout << "Enter a line of text: ";
    cin>>word;
    cout << "Tokens:" << endl;
    for (int i = 0; i < word.length(); i++) 
    {
        if (word[i] == ' ')
        {
            cout << t << endl;
            t = "";
        }
        else
        {
            t += word[i];
        }
    }
    cout << t << endl;
    return 0;
}
