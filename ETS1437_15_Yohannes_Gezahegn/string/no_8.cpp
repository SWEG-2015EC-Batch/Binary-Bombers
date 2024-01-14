#include <iostream>
#include <string.h>
#include<cctype>
using namespace std;
int main()
{
    int n;
    cout<<"enter of alphabet : ";
    cin>>n;
  char text[n];
  cout<<"enter the text:  ";
  for(int i=0;i<n;i++){
  cin>>text[i];
  }
  for(int i=0;i<n;i++){
  text[i]=toupper(text[i]);
  }
  cout<<"the text in uppercase is : "<<text<<endl;
  for(int i=0;i<n;i++){
  text[i]=tolower(text[i]);
  }
   cout<<"the text to lowercase is : "<<text<<endl;
return 0;
}
