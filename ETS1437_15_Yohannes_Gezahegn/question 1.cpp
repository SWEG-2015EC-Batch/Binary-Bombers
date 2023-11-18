
#include<iostream>
using namespace std;
int main()
{
float BMI,weight,height;
cout<<"please insert height"<<endl;
cin>>height;
cout<<"please insert weight"<<endl;
cin>>weight;
BMI=weight/(height*height);
cout<<"BMI = "<< BMI <<endl;
return 0;
}
