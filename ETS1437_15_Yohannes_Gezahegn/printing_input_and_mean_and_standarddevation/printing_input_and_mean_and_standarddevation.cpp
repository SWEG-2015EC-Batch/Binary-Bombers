#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int no_of_Data;
    float mean,sum=0,SD,sumSquare=0;//SD is standard deviation
    cout<<"enter number of data"<<endl;
    cin>>no_of_Data;
    for(int i=1;i<=no_of_Data;++i){
            float datavalue;
        cout<<"enter data value:"<<endl;
        cin>>datavalue;
    sum+=datavalue;
    sumSquare+=pow(datavalue,2);
     cout<<"input data is"<<datavalue<<endl;
    }
    mean=sum/no_of_Data;
    cout<<"mean is "<<mean<<endl;
    SD=sqrt((sumSquare/no_of_Data)-pow(mean,2));
    cout<<"standard deviation is "<<SD<<endl;
    return 0;
}


