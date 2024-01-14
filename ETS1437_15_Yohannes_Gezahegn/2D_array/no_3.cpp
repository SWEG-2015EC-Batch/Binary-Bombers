#include<iostream>
using namespace std;
int main(){
    int n;
cout<<"enter number of student: ";
cin>>n;
int test[n],assignment[n],quiz[n],project[n],finalexam[n],total[n];
string statuslevel[n];
for(int i=0;i<n;i++){
    cout<<"enter test value for student"<< i+1<<" :";
    cin>>test[i];
    if(test[i]<0||test[i]>10){
        cout<<"you enter invalid mark";
        return 0;
    }
    cout<<"enter assignment value for student"<< i+1<<" :";
    cin>>assignment[i];
    if(assignment[i]<0||assignment[i]>10)
        {
        cout<<"you enter invalid mark";
        return 0;
    }
    cout<<"enter quiz value for student"<< i+1<<" :";
    cin>>quiz[i];
    if(quiz[i]<0||quiz[i]>5)
        {
        cout<<"you enter invalid mark";
        return 0;
    }
    cout<<"enter project value for student"<< i+1<<" :";
    cin>>project[i];
    if(project[i]<0||project[i]>25)
        {
        cout<<"you enter invalid mark";
        return 0;
    }
    cout<<"enter final exam value for student"<< i+1<<" :";
    cin>>finalexam[i];
    if(finalexam[i]<0||finalexam[i]>50){
        {
        cout<<"you enter invalid mark";
        return 0;
    }
        }
        total[i]=finalexam[i]+project[i]+quiz[i]+test[i]+assignment[i];
        if(total[i]>=80)
            statuslevel[i]="exellent";
        else if(total[i]>=60)
            statuslevel[i]="very good";
        else if(total[i]>=50)
            statuslevel[i]="fair";
        else if(total[i]>=40)
            statuslevel[i]="poor";
        else
            statuslevel[i]="fail";
}
cout<<"studentno\ttest\tassignment\tquiz\tproject\tfinalexam\ttotal\tstatuslevel"<<endl;
for(int i=0;i<n;i++){
cout<<i+1<<"\t\t"<<test[i]<<"\t"<<assignment[i]<<"\t\t"<<quiz[i]<<"  \t"<<project[i]<<"  \t"<<finalexam[i]<<"\t\t"<<total[i]<<" \t"<<statuslevel[i]<<endl;
}

return 0;
}
