
#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    int weekly_working_Hours;
    double bonus_Rate_per_hour, base_Salary;

    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter weekly working hours: ";
    cin >> weekly_working_Hours;
    cout << "Enter bonus rate per hour: ";
    cin >> bonus_Rate_per_hour;
    cout << "Enter base salary: ";
    cin >> base_Salary;

    double gross_Salary = base_Salary + (weekly_working_Hours * bonus_Rate_per_hour);
    double pension = 0.05 * gross_Salary;
    double tax = 0.15 * gross_Salary;
    double net_Salary = gross_Salary - pension - tax;
    double bonus_Payment = weekly_working_Hours * bonus_Rate_per_hour;

    cout << "Employee Name: " << name <<endl;
    cout << "Gross Salary: $" << gross_Salary <<endl;
    cout << "Net Salary: $" << net_Salary <<endl;
cout << "Bonus Payment: $" << bonus_Payment <<endl;

    return 0;
}
