#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string text;
    cout <<"please enter a string: ";
    getline(cin, text);
    int Vowel=0 ,Consonant=0 ,Digits=0, Specialch=0;
    for (int a=0;a<text.length();a++)
     {
        char ch = text[a];
        if (isalpha(ch))
        {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                Vowel++;
            }
            else
            {
                Consonant++;
            }
        }
    else if (isdigit(ch))
        {
            Digits++;
        }
    else
        {
            Specialch++;
        }
    }
    cout<<"The entered text' "<<text<<" 'has: "<<endl;
    cout<<Vowel<<" vowels "<<endl;
    cout<<Consonant<<" consonants "<<endl;
    cout<<Digits<<" digits "<<endl;
    cout<<Specialch<<" special characters "<<endl;
    return 0;
}
