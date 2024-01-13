#include<iostream>
using namespace std;
int main()
{
   int temp[8]={};
   int total=0;
   float average;
   cout<<"enter array elements"<<endl;
   for(int i=0;i<8;++i){
    cin>>temp[i];
    total+=temp[i];
   }
   average=total/8;
   cout<<"total is :"<<total<<endl;
   cout<<"average is :"<<average<<endl;
   return 0;
}
