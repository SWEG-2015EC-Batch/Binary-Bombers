#include<iostream>
using namespace std;
int main()
{
float arr[3][3]={11.95, 16.32, 12.15, 8.22, 15.98,26.22, 13.54, 6.45,17.59};
cout<<"the array elements are "<<endl;
for(int i=0;i<3;++i){
    for(int j=0;j<3;++j){
        cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
}
return 0;
}
