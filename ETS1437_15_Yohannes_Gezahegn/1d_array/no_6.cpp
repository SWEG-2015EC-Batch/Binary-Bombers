#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"enter a value for n"<<endl;
 cin>>n;
 cout<<"enter a value for array"<<endl;
int even[n];
for(int j=0;j<n;j++){
cin>>even[j];
}
for(int i=n-1;i>=0;i--){
    if(even[i]%2==0)
        cout<<even[i]<<",";
}
return 0;
}
