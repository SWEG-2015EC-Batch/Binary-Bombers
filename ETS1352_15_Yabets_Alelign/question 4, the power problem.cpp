#include<iostream>
#include<ctype.h>
#include<cmath>
#include<string.h>
using namespace std;
 int main(){
 int a, b;
 
    cout<<"please enter the value of a: ";
    cin>>a;
    cout<<"please enter the value of b: ";
    cin>>b;
     int result = pow(a, b);
      cout<< "The result of " << a << "^" << b<< " is: " << result << endl;
    return 0;
    }
