#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string word;
    cout << "please enter a string: ";
    getline(cin, word);
    int v = 0, c = 0;
    for (int a=0; a<word.length(); a++)
     {
        char l = word[a];
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
    cout << "The word'"<<word<<"'has: "<<endl;
    cout <<v<<"vowels"<<endl;
    cout <<c<<"consonants"<< endl;
    return 0;
}
