#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    string text;
    cout << "Enter a string: ";
    cin>>text;
    int x = 0, y = 0, z = 0, k = 0;
    for (int i = 0; i < text.length(); i++)
     {
        char ch = text[i];
        if (isalpha(ch)) 
        {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            {
                x++;
            } 
            else 
            {
                y++;
            }
        }
    else if (isdigit(ch))
        {
            z++;
        }
    else
        {
            k++;
        }
    }
    cout << "The text' " << text << " 'has: "<<endl;
    cout <<x<<" vowels "<<endl; 
    cout <<y<<" consonants "<< endl;
    cout <<z<<" digits "<< endl;
    cout <<k<<" special characters "<< endl;
    return 0;
}
