#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() 
{
    int NumName;
    cout<<"Please enter the respective number of names: ";
    cin>>;
    string Name[NumName];
    cout << "Please enter the respective names: " << endl;
    for (int a=0;a<n;a++) {
        cin>>Name[a];
    }
    sort(Name,Name+NumName);
    cout<<"The given names in alphabetical order respectively are: "<<endl;
    for (int a=0;a<NumName;a++) 
    {
        cout<<names[a]<<endl;
    }
    return 0;
}
