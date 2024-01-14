#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string text;
    cout << "Enter a string: ";
    getline(cin, text);
    int v = 0, c = 0;
    for (int i = 0; i < text.length(); i++)
     {
        char l = text[i];
        if (isalpha(l)) 
        {
            l = tolower(l);
            if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u') 
            {
                v++;
            } 
            else 
            {
                c++;
            }
        }
    }
    cout << "The text' " << text << " 'has: "<<endl;
    cout <<v<<" vowels"<<endl; 
    cout <<c<<" consonants"<< endl;
    return 0;
}
