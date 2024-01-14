#include<iostream>
using namespace std;
int main()
{
    double fileSize;
    cout<<"file_size in bytes:"<<endl;
    cin>>fileSize;
    const double speedOfTransmission=960;// the unit is bytes per second or characters per second.
    double time=fileSize*speedOfTransmission;
    cout<<"TIME :"<<time<<"second"<<endl;
    return 0;
}
