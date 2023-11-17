//Body Mass Index Calculator
#include<iostream>
using namespace std;
int main()
{
    float Height, Weight, BMI;
    cout<<"Please Enter your Height"<< endl;
    cin>>Height;
    cout<<"Please Enter your Weight"<< endl;
    cin>>Weight;
    BMI = Weight/(Height*Height);
    cout<<"Your BMI is"<< endl;
    cout<<BMI;
    return 0;
}
