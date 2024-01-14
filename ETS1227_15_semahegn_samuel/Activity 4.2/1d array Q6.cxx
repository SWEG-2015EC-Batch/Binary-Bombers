#include<iostream>
using namespace std;
int main()
{
   int num;
   cout<<"enter the number of list of numbers"<<endl;
   cin>>num;
   int originalNum[num];
   int reversedEvenNum[num];
   int numEven=0;
   cout<<"enter a list of numbers"<<endl;
   for(int i=0;i<num;++i){
    cin>>originalNum[i];
    if(originalNum[i]%2==0){
        reversedEvenNum[numEven]=originalNum[i];
        numEven++;
    }
   }
   cout<<"reversed even numbers of list"<<endl;
   for(int i=numEven-1;i>=0;--i){
    cout<<reversedEvenNum[i]<<"\t";
   }
   return 0;
}
