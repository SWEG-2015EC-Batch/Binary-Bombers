#include<iostream>
#include<ctype.h>
#include<math.h>
#include<string.h>
using namespace std;
int main()// this program will be used to calculate the BMI by taking inputs such as the weight and height of a person.
{
float weight,height, BMI; 
 cout<<"please enter the weight of the person: ";
 cin>>weight;
 cout<<"please enter the height of the person: ";
 cin>>height;
 BMI=weight/(height*height);
 cout<<"BMI= "<<BMI;
 return 0;
}
