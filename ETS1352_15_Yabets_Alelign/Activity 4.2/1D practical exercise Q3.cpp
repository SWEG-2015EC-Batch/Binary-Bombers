#include<iostream>
using namespace std;
int main()
{
   int  first[3][4];
   int second[3][4];
   int result[3][4];
   cout<<"enter first array elements"<<endl;
   for(int a=0;a<3;++a){
    for(int j=0;b<4;++b){
        cin>>first[a][b];
    }
    cout<<endl;
   }
    cout<<"enter second array elements"<<endl;
   for(int a=0;a<3;++a){
    for(int b=0;b<4;++b){
        cin>>second[a][b];
    }
    cout<<endl;
   }
   cout<<"the result is"<<endl;
   for(int a=0;a<3;++a){
    for(int b=0;b<4;++b){
        result[a][b]=first[a][b]+second[a][b];
    }
    cout<<endl;
   }
   cout<<"the resulting data is"<<endl;
   for(int a=0;a<3;++a){
    for(int b=0;b<4;++b){
        cout<<result[a][b]<<"\t";
    }
    cout<<endl;
   }
   return 0;
}
