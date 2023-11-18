#include<iostream>
#include<ctype.h>
#include<cmath>
#include<string.h>
using namespace std;
 int main(){
 int x, y;
    cout<<"please enter the value of x: ";
    cin>>x;
    cout<<"please enter the value of y: ";
    cin>>y;
     int result = pow(x, y);
      cout<< "The result of " << x << "^" << y<< " is: " << result << endl;
    return 0;
    }
