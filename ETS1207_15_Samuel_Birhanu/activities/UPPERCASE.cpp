#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    string input;
    cout<<"enter string :";
    getline(cin,input);
    for(char &c:input){
        if(isupper(c)){
            c=tolower(c);
            }else if(islower(c)){
                c=toupper(c);
        }
    }

    cout<<"converted string:"<<input<<endl;
     return 0;
}
