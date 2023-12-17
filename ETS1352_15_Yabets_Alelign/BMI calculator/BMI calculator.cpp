#include<iostream>
#include<cmath>
using namespace std;
int main(){
   double weight,height;
   char gender;
   cout<<"ENTER WEIGHT :"<<endl;
   cin>>weight;
   cout<<"ENTER HEIGHT :"<<endl;
   cin>>height;
   double BMI=weight/(pow(height,2));
   cout<<"BMI = "<<BMI<<endl;
   cout<<"PLEASE ENTER YOUR GENDER : "<<endl;
   cin>>gender;
   if(gender=='m'){
    if(BMI<20.5){
        cout<<"health status : "<<"under weight ";
    }
    else if(BMI>=20.5&&BMI<25){
        cout<<"health status : "<<"normal weight ";
    }
    else if(BMI>=30){
        cout<<"health status : "<<"obesity ";
    }
    else {
        cout<<"health status : "<<"over weight ";
    }
   }
   if(gender=='f'){
    if(BMI<18.5){
        cout<<"health status : "<<"under weight ";
    }
    else if(BMI>=18.5&&BMI<24){
        cout<<"health status : "<<"normal weight ";
    }
    else if(BMI>=30){
        cout<<"health status : "<<"obesity ";
    }
    else {
        cout<<"health status : "<<"over weight ";
    }
   }
   return 0;
}
