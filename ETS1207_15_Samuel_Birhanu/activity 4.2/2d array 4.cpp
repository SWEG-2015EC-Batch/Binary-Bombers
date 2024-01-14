#include<iostream>
using namespace std;
int main()
{
   int num[3][4]={};
   int  sum=0;  cout<<"enter array elements"<<endl;
  for(int i=0;i<3;++i){
    for(int j=0;j<4;++j){
        cin>>num[i][j];
        if(num[i][j]%2==0){
            sum+=num[i][j];
        }
    }

  }
   cout<<"sum of even numbers is : "<<sum<<endl;
   cout<<"-------array elements---------------"<<endl;
   for(int i=0;i<3;++i){
    for(int j=0;j<4;++j){
        if(num[i][j]%2==0){
            cout<<num[i][j]<<"\t";
        }
        else{
            cout<<"*\t";
        }
    }
    cout<<endl;
   }
   return 0;

}
