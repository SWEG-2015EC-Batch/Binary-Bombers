#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char FirstName[15],MiddleName[15],LastName[15];
cout<<"Please enter your first name: ";
cin>>FirstName;
cout<<"Please enter your middle name: ";
cin>>MiddleName;
cout<<"Please enter your last name: ";
cin>>LastName;
cout<<"the first letter of the inputted names are : "<<FirstName[0]<<","<<MiddleName[0]<<","<<LastName[0]<<" "<<"respectively";
return 0;
}
