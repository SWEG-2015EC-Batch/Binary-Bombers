#include<iostream>
using namespace std;
int main()
{
   int  first[3][4];
   int second[3][4];
   int result[3][4];
   cout<<"enter first array elements"<<endl;
   for(int i=0;i<3;++i){
    for(int j=0;j<4;++j){
        cin>>first[i][j];
    }
    cout<<endl;
   }
    cout<<"enter second array elements"<<endl;
   for(int i=0;i<3;++i){
    for(int j=0;j<4;++j){
        cin>>second[i][j];
    }
    cout<<endl;
   }
   cout<<"the result is"<<endl;
   for(int i=0;i<3;++i){
    for(int j=0;j<4;++j){
        result[i][j]=first[i][j]+second[i][j];
    }
    cout<<endl;
   }
   cout<<"the resulting data is"<<endl;
   for(int i=0;i<3;++i){
    for(int j=0;j<4;++j){
        cout<<result[i][j]<<"\t";
    }
    cout<<endl;
   }
   return 0;
}
