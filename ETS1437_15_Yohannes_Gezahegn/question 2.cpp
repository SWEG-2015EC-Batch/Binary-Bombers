
#include<iostream>
using namespace std;
int main(){
float fuel_tank_capacity,fuel_consumption,miles_on_full_tank;
cout<<"enter the fuel tank capacity of the automobile "<<endl;
cin>>fuel_tank_capacity;
cout<<"enter the fuel consumption of the automobile"<<endl;
cin>>fuel_consumption;
miles_on_full_tank = fuel_consumption*fuel_tank_capacity;
cout<<"the maximum miles on full tank of this car = "<<miles_on_full_tank<<" miles "<<endl;
return 0;
}
