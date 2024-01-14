#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     double WEIGHT,HEIGHT;
    cout<<"ENTER WEIGHT :"<<endl;
    cin>>WEIGHT;
    cout<<"ENTER HEIGHT :"<<endl;
    cin>>HEIGHT;
    double BMI=WEIGHT/pow(HEIGHT,2);
    cout<<"BMI = "<<BMI <<"kg/m^2" <<endl;//BMI=body mass index
}
