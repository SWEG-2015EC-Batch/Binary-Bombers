#include<iostream>
using namespace std;
int main(){
int temp[8];
float total=0;
cout<<"enter a number : ";
for(int a=0;a<8;a++){
    cin>>temp[a];
total=total+temp[a];
}
for(int i=0;i<8;i++){
    cout<<temp[i]<<",";
}
cout<<endl;
float average=total/8;
cout<<"average :"<<average;
return 0;
}
