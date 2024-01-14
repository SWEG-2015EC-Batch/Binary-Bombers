#include<iostream>
using namespace std;
int main(){
    int n,m;
cout<<"enter a number of row :";
cin>>n;
int proresult[n];
cout<<"enter the number of column :";
cin>>m;
int sumres[m];
int a[n][m];
cout<<"enter the array"<<endl;
for(int i=0;i<n;i++){
        int product=1;
        for(int j=0;j<m;j++){
          cin>>a[i][j];
product=product*a[i][j];
        }
        proresult[i]=product;
   }
   cout<<"the product of each rows : ";
   for(int i=0;i<n;i++){
    cout<<proresult[i]<<" ";
   }
   cout<<endl;
   cout<<"the sum of each columns : ";
   for(int i=0;i<m;i++){
    int sum=0;
    for(int j=0;j<n;j++){
        sum=sum+a[j][i];
    }
    sumres[i]=sum;
   }
   for(int i=0;i<m;i++)
   cout<<sumres[i]<<" ";
return 0;
}
