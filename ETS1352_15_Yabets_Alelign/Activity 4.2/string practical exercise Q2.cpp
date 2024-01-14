#include<iostream>
#include<string>
using namespace std;
int main()
{
    string word;
    cout<<"Please enter a text: ";
    cin>>word;
    int a=0;
    int b=word.length() - 1;
    int L= 1;
    while (a<b)
    {
        if (word[a] != word[b])
        {
            L = 0;
            break;
        }
        a++;
        b--;
    }
    if (L == 1)
    {
        cout<<"Thegiven word '"<<word<<"'is a Palindrome."<<endl;
    }
    else 
    {
        cout<<"The given word '"<<word<<"'is not a Palindrome."<<endl;
    }
    return 0;
}
