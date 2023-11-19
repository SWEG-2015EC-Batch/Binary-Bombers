#include<iostream>
#include<ctype.h>
#include<math.h>
#include<string.h>
using namespace std;
//this program will be used to write both the uppercase and lower case versions of a given letter.
int main()
{
    char Letter;
    cout<<"Enter the Letter"<< endl;
    cin>>Letter;
    if (islower (Letter))
        {
            Letter = toupper(Letter);
            cout<<Letter;
        }
    else if (isupper(Letter))
		{
		Letter = tolower(Letter);
		cout<<Letter;
		}
	else 
		{
        cout << "The character " << Letter << " is not a letter."<< endl;
    	}

    return 0;
}
