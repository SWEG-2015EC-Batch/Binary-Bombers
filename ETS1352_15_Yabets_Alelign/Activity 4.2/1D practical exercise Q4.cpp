#include<iostream>
using namespace std;
int main()
{
float arr[3][3]={11.95, 16.32, 12.15, 8.22, 15.98,26.22, 13.54, 6.45,17.59};
cout<<"the array elements will be "<<endl;
for(int a=0;a<3;++a){
    for(int b=0;b<3;++b){
        cout<<arr[a][b]<<"\t";
    }
    cout<<endl;
}
return 0;
}
