#include <iostream>
using namespace std;
int main()
{
	
	int array[3][4];
	cout<<"enter the numbers \n";
	for(int i = 0; i<3; i++)
	{
		for(int j = 0; j<4;j++){
			cin>>array[i][j];
			cout<<array[i][j]<<"\t";
			if(array[i][j]%2==0){
				
				int sumEven=0;
				sumEven+=array[i][j];
				cout<<sumEven;
		}
		
		else{cout<<"*\t";
	
			}
		
	}

	cout<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}