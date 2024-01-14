#include <iostream>
using namespace std ;

int main()

{
	
float mark [3][4] ={ 60, 73.5 ,57.25 , 80, 41.8 ,64, 89 ,54};

cout<<"the size of array of mark is  "<<sizeof(mark)/4 <<endl;

 cout<<"the list of the marks are "<<endl;
	

for(int r = 0 ; r < 3 ; r++) {
	
	for(int c = 0 ; c < 4 ; c++)
	
	{
	cout<<mark[r][c]<<"\t" ;
	
	}

}
cout<<endl ;
int age [3][4] = {
	
	{16 ,37 ,55 } ,
	
	{24 ,80 ,20 ,43 } ,
	
	{  60 ,33 ,  90 } 
	
} ;


cout<<"the size of array of age is "<<sizeof(age)/4<<endl;

cout<<"the list of the ages are "<<endl ;
	

for(int s = 0 ; s < 3 ; s++) {
	
	for(int t = 0 ; t < 4 ; t++)
	
	{ 
	cout<<age[s][t]<<"\t";

	}
	
}
cout<<endl ;


return 0 ;
	
}