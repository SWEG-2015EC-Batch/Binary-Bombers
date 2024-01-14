#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char first_name[15],middle_name[15],last_name[15];
cout<<"enter first name: ";
cin>>first_name;
cout<<"enter middle name: ";
cin>>middle_name;
cout<<"enter last name: ";
cin>>last_name;
cout<<"the first letter of the names are : "<<first_name[0]<<","<<middle_name[0]<<","<<last_name[0]<<" "<<"respectively";
return 0;
}
