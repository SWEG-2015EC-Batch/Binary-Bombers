#include<iostream>
using namespace std;
int main()
{
   int temp[8]={};
   int total=0;
   float average;
   cout<<"enter array elements"<<endl;
   for(int a=0;a<8;++a){
    cin>>temp[a];
    total+=temp[a];
   }
   average=total/8;
   cout<<"total is :"<<total<<endl;
   cout<<"average is :"<<average<<endl;
   return 0;
}
