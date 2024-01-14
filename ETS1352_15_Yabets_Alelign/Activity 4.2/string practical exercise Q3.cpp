#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string words,texts = "";
    cout<<"Please enter a word: ";
    cin>>words;
    for (int a=0;a<words.length();a++) 
    {
        char b = words[a];
        if (isalpha(b))
        {
            texts += b;
        }
    }
    cout << "The string after removing the non-alphabetical characters is: "<<texts<<endl;
    return 0;
}
