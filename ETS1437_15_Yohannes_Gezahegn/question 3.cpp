

#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
string letter,uppercase_letter,lowercase_letter;
cout<<"enter the letter"<<endl;
cin>>letter;
if(isupper(letter)){
lowercase_letter = tolower(letter);
cout<<lowercase_letter;
}
else if(islower(letter)){
uppercase_letter = toupper(letter);
cout<<uppercase_letter;
}
else{
    cout<<" the character "<< letter <<" is not a letter ";
}
return 0;
}

