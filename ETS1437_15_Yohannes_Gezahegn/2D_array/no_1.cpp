#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number :";
cin>>n;
int a[n];
int b[n];
cout<<"enter a value for array a :";
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<"enter a value for array b :";
for(int i=0;i<n;i++){
    cin>>b[i];
}
for(int i=0;i<n;i++){
if(a[i]==b[i]){
    cout<<"the "<<i+1<<"'s elements in the two array are identical"<<endl;}
    else{
        cout<<"the "<<i+1<<"'s elements in the two array are not identical"<<endl;}}

return 0;
}
