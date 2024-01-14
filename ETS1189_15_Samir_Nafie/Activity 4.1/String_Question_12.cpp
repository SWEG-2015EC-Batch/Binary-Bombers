#include <iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number of students : ";
    cin>>n;
char ans[11]={'A','B','A','A','C','D','A','B','A','C'};
char stu[11];
for(int j=0;j<n;j++){
cout<<"enter the answer of the student"<<j+1 <<": "<<endl;
int sum=0;
for(int i=0;i<11;i++){
    cin>>stu[i];
    stu[i]=toupper(stu[i]);
    if(stu[i]==ans[i])
        sum=sum+1;
}
cout<<"the score of the student"<< j+1<<" is : "<<sum<<endl;
}
return 0;
}
