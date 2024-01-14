#include <iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main()
{
    int NumStudent;
    cout<<"Please enter the number of students : ";
    cin>>NumStudent;
char ans[11]={'B','B','C','D','A','C','B','D','B','B'};
char stu[11];
for(int a=0;a<NumStudent;a++){
cout<<"please enter the answer of the given student"<<a+1<<":"<<endl;
int sum=0;
for(int b=0;b<11;b++){
    cin>>stu[b];
    stu[b]=toupper(stu[b]);
    if(stu[b]==ans[b])
        sum=sum+1;
}
cout<<"The score of the given student's total "<< a+1<<" is :"<<sum<<endl;
}
return 0;
}
