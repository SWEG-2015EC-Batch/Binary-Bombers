#include <iostream>
using namespace std;
int main()
{
    int array[3][4];
cout<<"enter the numbers \n";
	for(int a=0;a<3;a++)
	{
		for(int b=0; b<4;b++){
cin>>array[a][b];
cout<<array[a][b]<<"\t";
			if(array[a][b]%2==0){

				int sumEven=0;
				sumEven+=array[a][b];
cout<<sumEven;
		}

		else
    {
cout<<"*\t";
	}

	}

	cout<<endl;
	}











	return 0;

}
