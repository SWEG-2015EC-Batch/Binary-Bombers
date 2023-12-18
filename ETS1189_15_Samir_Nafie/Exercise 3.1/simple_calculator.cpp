#include<iostream>
using namespace std;
int main()
{
    do{
    int num1,num2,result;
    char op;
    cout<<"enter num1"<<endl;
    cin>>num1;
    cout<<"enter operator either of (+,-,*,/,%)"<<endl;
    cin>>op;
    cout<<"enter num2"<<endl;
    cin>>num2;

    switch(op){
 case '+':
    result=num1+num2;
    break;
 case'-':
    result=num1-num2;
    break;
 case'*':
    result=num1*num2;
    break;
 case'/':
    if(num2!=0){
        result=num1/num2;
    }else{
    cout<<"ERROR; can't be divided by zero"<<endl;
    }
    break;

     case'%':
     if(num2!=0){
        result=num1 % num2;
     }
    else{

        cout<<"error can't calculate module with zero divisor "<<endl;
    }
    break;

    default:
        cout<<"invalid operator"<<endl;
    }
    cout<< "RESULT= "<<result<<endl;
    char choice;
    cout<<"do you want to continue or not ? to continue press any key except '0' "<<endl;
    cin>>choice;
    if(choice='0'){
        break;
    }
    }while(true);
    return 0;
}
