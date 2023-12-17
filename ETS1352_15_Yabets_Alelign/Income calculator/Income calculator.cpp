#include<iostream>
using namespace std;
int main()
{
    float gross_salary,overtime_bonus_rate,pension,income_tax,bonus_payment,overtime_payment,net_salary;
    int worked_hours;
    float PR=0.07;//PR is pension rate
    cout<<"enter your gross salary"<<endl;
    cin>>gross_salary;
    cout<<"enter your worked hours"<<endl;
    cin>>worked_hours;
    cout<<"enter overtime bonus rate"<<endl;
    cin>>overtime_bonus_rate;
    pension=gross_salary*PR;
    overtime_payment=(worked_hours-40)*overtime_bonus_rate;
    if(gross_salary<=200){
        income_tax=0;
    }
    else if(gross_salary>200&&gross_salary<=600){
        income_tax=gross_salary*0.1;
    }
    else if(gross_salary>600&&gross_salary<=1200){
        income_tax=gross_salary*0.15;
    }
    else if(gross_salary>1200&&gross_salary<=2000){
        income_tax=gross_salary*0.2;
    }
    else if(gross_salary>2000&&gross_salary<3500){
        income_tax=gross_salary*0.25;
    }
    else{
        income_tax=gross_salary*0.3;
    }
    net_salary=(gross_salary-pension-income_tax)+overtime_payment;
    cout<<"your net salary is"<<net_salary<<endl;
    return 0;
}

