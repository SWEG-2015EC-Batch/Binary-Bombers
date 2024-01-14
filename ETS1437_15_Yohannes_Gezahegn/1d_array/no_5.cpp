#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number of student :";
cin>>n;
cout<<"enter the mark value of students:"<<endl;
int mark[n];
string statuslevel[n];
for(int i;i<n;i++){
    cin>>mark[i];
    if(mark[i]>=80)//we can ommit the brace if the number of line after if is 1
        statuslevel[i]="exellent";
    else if(mark[i]>=60)
        statuslevel[i]="very good";
    else if(mark[i]>=50)
        statuslevel[i]="fair";
        else if(mark[i]>=40)
        statuslevel[i]="poor";
        else
        statuslevel[i]="fail";
}
cout<<"StuNo\tscorse\tstatuslevel"<<endl;
     for(int i=0;i<n;i++)
     {
         cout<<i+1<<"\t"<<mark[i]<<"\t"<<statuslevel[i]<<endl;
     }
return 0;
}
