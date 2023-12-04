#include<iostream>
#include<math.h>
using namespace std;
int main()// this program will be used to calculate the BMI by taking inputs such as the weight and height of 10 different people.
{
float weight,height, BMI;
string gender;
for(int i=1; i>0; i++)
{
 cout<<"please enter the gender of the person: "<<endl;
 cin>>gender;
 cout<<"please enter the weight of the person: "<<endl;
 cin>>weight;
 cout<<"please enter the height of the person: "<<endl;
 cin>>height;
 BMI=weight/pow(height,2);
 cout<<"BMI= "<<BMI;
 cout<<"gender of the person is :"<<gender;
 if (gender=="male"){
    if(BMI<20.5)
       {
        cout<<"health status :"<<"underweight";
       }
    else if (BMI<25&&BMI>=20.5)
        {
        cout<<"health status :"<<"normal weight";
        }
    else if(BMI<30&&BMI>=25)
        {
        cout<<"health status :"<<"overweight";
        }
    else
        {
        cout<<"health status :"<<"obese";
        }
    }


 if (gender=="female"){
    if(BMI<18.5)
       {
        cout<<"health status :"<<"underweight";
       }
    else if (BMI<24&&BMI>=18.5)
        {
        cout<<"health status :"<<"normal weight";
        }
    else if(BMI<30&&BMI>=24)
        {
        cout<<"health status :"<<"overweight";
        }
    else
        {
        cout<<"health status :"<<"obese";
        }
    }
}
return 0;
}
