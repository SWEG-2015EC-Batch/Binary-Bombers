#include <iostream>
#include <string.h>
#include<cctype>
using namespace std;
int main()
{
    int NumAlphabet;
    cout<<"Enter the number of given alphabets : ";
    cin>>NumAlphabet;
  char text[NumAlphabet];
  cout<<"Please enter the given text:  ";
  for(int a=0;a<NumAlphabet;a++){
  cin>>text[a];
  }
  for(int a=0;a<NumAlphabet;a++){
  text[a]=toupper(text[a]);
  }
  cout<<”The text in uppercase will be: "<<text<<endl;
  for(int a=0;a<NumAlphabet;a++){
  text[a]=tolower(text[a]);
  }
   cout<<"the text in lowercase will be: "<<text<<endl;
return 0;
}
