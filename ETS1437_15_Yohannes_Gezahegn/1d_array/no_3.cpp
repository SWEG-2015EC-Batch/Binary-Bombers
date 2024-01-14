
#include <iostream>
using namespace std;
int main()
{

    int a[3][3];
    int c[3][3];
    cout<<"enter the first numbers\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;
    cout<<"enter the second numbers\n";
    int b[3][3];
    for(int i=0;i<3;i++)

    {
        for(int j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];

        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<c[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}
