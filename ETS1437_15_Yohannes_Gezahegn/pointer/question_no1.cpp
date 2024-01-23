#include <iostream>

using namespace std;

int main()
{
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    int arr[3][4] = {{10, 11, 12, 13}, {20, 21, 22, 23}, {30, 31, 32, 33}};
    cout<<"\t******************\n";
    cout<<"The list of memory location for balanc:\n";
    cout<<"\t******************\n";
    for (int i = 0; i < 5; i++)
    {
        cout<<"The memory location of "<<balance[i]<<" is ======> "<<&balance[i]<<endl;
    }
    cout<<"\t******************\n";
    cout<<"The list of memory location for arr:\n";
    cout<<"\t******************\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<"The memory location of "<<arr[i][j]<<" is ======> "<<&arr[i][j]<<endl;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<*(balance + i)<<endl;
    }
    cout<<"\t******************\n";
    cout<<"Listing the elements of arr using array instead of index:\n";
    cout<<"\t******************\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<*(*(arr + i) + j)<<endl;
        }
        
    }
    cout<<"\t******************\n";
    cout<<"Listing the elements of balance using another pointer:\n";
    cout<<"\t******************\n";
    for (int i = 0; i < 5; i++)
    {
        double *ptr = &balance[i];
        cout<<*ptr<<endl;
    }
    cout<<"\t******************\n";
    cout<<"Listing the elements of arr using another pointer:\n";
    cout<<"\t******************\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int *ptr = &arr[i][j];
            cout<<*ptr<<endl;
        }
    }
    
    
    return 0;
}
