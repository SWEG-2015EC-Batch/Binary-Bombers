#include<iostream>
#include<ctype.h>
#include<math.h>
#include<string.h>
using namespace std;
int main() {
    int weeklyHours;
    string name;
    double bonusRate, baseSalary;
    cout<< "Enter employee's name: ";
    cin>> name;
    cout<< "Enter the weekly working hours of the employee: ";
    cin>> weeklyHours;
    cout<< "Enter bonus rate per hour of the employee: ";
    cin>> bonusRate;
    cout<< "Enter the base salary of the employee: ";
    cin>> baseSalary;
    double grossSalary = baseSalary + (weeklyHours * bonusRate);
    double tax = 0.15 * grossSalary;
    double netSalary = grossSalary - tax;
    double bonusPayment = weeklyHours * bonusRate;
    cout<< "\nEmployee Name: " << name << endl;
    cout<< "Gross Salary: " << grossSalary <<endl;
    cout<< "Tax Deduction: " << tax <<endl;
    cout<< "Net Salary: " << netSalary <<endl;
    cout<< "Bonus Payment: " << bonusPayment <<endl;
    return 0;
}
