#include<iostream>
using namespace std;
int main()
{
    double baseSalary,weeklyWorkingHours,bonusRatePerHour;
    cout<<"ENTER BASE SALARY :$"<<endl;
    cin>>baseSalary;
    cout<<"ENTER WEEKLY WORKING HOURS :"<<endl;
    cin>>weeklyWorkingHours;
    cout<<"ENTER BONUS RATE PER HOUR :$"<<endl;
    cin>>bonusRatePerHour;
    const double nw=4;//nw =number of weeks in a month.
    const double pension_rate=.05;
    const double tax=.15;
    double bonus_payment=weeklyWorkingHours*bonusRatePerHour*nw;
    double gross_salary=bonus_payment+baseSalary;
    double net_salary=gross_salary-((baseSalary*pension_rate)+(baseSalary*tax));
    cout<<"bonus_payment :$"<<bonus_payment<<endl;
    cout<<"gross_salary :$"<<gross_salary<<endl;
    cout<<"net_salary :$"<<net_salary<<endl;
    return 0;

}
