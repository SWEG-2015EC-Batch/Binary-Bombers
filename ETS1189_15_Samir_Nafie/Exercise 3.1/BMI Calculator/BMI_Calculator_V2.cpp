//BMI Claculator V2
#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    float Height, Weight, BMI;
    char Gender;
        cout<<"Please Enter your Gender (M or F)"<< endl;
        cin>>Gender;
        Gender = toupper(Gender);
        cout<<"Gender: "<<Gender<<endl;
        if(Gender == 'M')
        {
            cout<<"Please Enter your Height"<< endl;
            cin>>Height;
            cout<<"Please Enter your Weight"<< endl;
            cin>>Weight;
            BMI = Weight/(Height*Height);
            if(BMI<=20.5)
            {
                cout<<"Your BMI Level is Underweight"<<endl;
            }
            else if(20.5<BMI && BMI<=25)
            {
                cout<<"Your BMI Level is Normal"<<endl;
            }
            else if(25<BMI && BMI<=30)
            {
                cout<<"Your BMI Level is Overweight"<<endl;
            }
            else
            {
                cout<<"Your BMI Level is Extremely Obese"<<endl;
            }
        }
        else if(Gender == 'F')
        {
            cout<<"Please Enter your Height"<< endl;
            cin>>Height;
            cout<<"Please Enter your Weight"<< endl;
            cin>>Weight;
            BMI = Weight/(Height*Height);
            if(BMI<=18.5)
            {
                cout<<"Your BMI Level is Underweight"<<endl;
            }
            else if(18.5<BMI && BMI<=24)
            {
                cout<<"Your BMI Level is Normal"<<endl;
            }
            else if(24<BMI && BMI<=30)
            {
                cout<<"Your BMI Level is Overweight"<<endl;
            }
            else
            {
                cout<<"Your BMI Level is Extremely Obese"<<endl;
            }
        }
        else 
        {
            cout<<"The Gender Specified is not Valid"<<endl;
        }   
    return 0;
}
