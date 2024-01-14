#include<iostream>
using namespace std;
int main(){
int a[3][4];
int sum=0;
cout<<"enter the array elements"<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cin>>a[i][j];
    }
}

for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        if(a[i][j]%2==0)
          sum=sum+a[i][j];

    }
}
   cout<<"the sum of even elements of the array is: "<<sum<<endl;

     for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        if(a[i][j]%2!=0)
          cout<<"*  ";
        else
            cout<<a[i][j]<<"  ";
    }
     cout<<endl;

     }


return 0;
}
