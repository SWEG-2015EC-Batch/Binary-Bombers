#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    string t = "";
    cout<<"Enter a line of text: ";
    getline(cin, word);
    cout<< "Tokens:"<<endl;
    for (int a=0; a<word.length(); a++) 
    {
        if (word[a] == ' ')
        {
            cout<<t<<endl;
            t = "";
        }
        else
        {
            t += word[a];
        }
    }
    cout<<t<<endl;
    return 0;
}
