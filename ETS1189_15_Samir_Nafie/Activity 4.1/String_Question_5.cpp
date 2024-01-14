#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    string text;
    cout << "Enter a string: ";
    getline(cin, text);
    int v = 0, c = 0, d = 0, s = 0;
    for (int i = 0; i < text.length(); i++)
     {
        char ch = text[i];
        if (isalpha(ch)) 
        {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            {
                v++;
            } 
            else 
            {
                c++;
            }
        }
    else if (isdigit(ch))
        {
            d++;
        }
    else
        {
            s++;
        }
    }
    cout << "The text' " << text << " 'has: "<<endl;
    cout <<v<<" vowels "<<endl; 
    cout <<c<<" consonants "<< endl;
    cout <<d<<" digits "<< endl;
    cout <<s<<" special characters "<< endl;
    return 0;
}
