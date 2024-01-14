#include <iostream>
using namespace std;
int main()
{
    int array[3][4]={{1, 2, 3},{4, 5, 6,7}};
    for (int a=0;a< 3;++a) {
        for (int b=0;b<4;++b)
            {
            cout<<array[a][b]<< "\t";
        }
        cout<<"\n";
    }
    cout<<"\nMultiplication of Row Elements:\n";
    for (int a=0;i<3;++a)
        {
        int rowProduct = 1;
        for (int a=0;b<3;++b)
         {
            rowProduct *= array[a][b];
        }
        cout<<"Row " <<a+1<< ": " <<rowProduct<< "\n";
    }

    cout<<"\nSum of Column Elements:\n";
    for (int b=0;b<4;++b)
        {
        int colSum = 0;
        for (int a=0;i<3;++a) {
            colSum += array[a][b];
        }
        cout<<"Column "<<a+1<<": "<<colSum<< "\n";
    }



    return 0;
}
