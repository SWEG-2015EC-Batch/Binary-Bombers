#include <iostream>
using namespace std;
int main()
{
    double tankCapacity, milesPerGallon;
    cout << "Enter tank capacity: ";
    cin >> tankCapacity;
    cout << "Enter the miles per gallon: ";
    cin >> milesPerGallon;
    double milesWithoutRefueling = tankCapacity * milesPerGallon;
    cout << "The automobile can be driven for " << milesWithoutRefueling << " miles without refueling." <<endl;

    return 0;
}

