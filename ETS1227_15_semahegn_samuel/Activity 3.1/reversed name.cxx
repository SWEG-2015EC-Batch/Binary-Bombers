#include <iostream>

using namespace std ;

int main ()


{
	string name ;
	
	cout<<"enter the name "<<endl;
	cin>>name;
	
	reverse(
	
	name.begin() ,name.end()
	
	);
	
cout<<"when the name you entered is reversed it become"<<endl;
cout<<name;	
	
	
	
	return 0 ;
}