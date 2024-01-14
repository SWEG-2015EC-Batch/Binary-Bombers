#include<iostream>
using namespace std;
int main()
{
    int arr[4][5]={16, 22, 99, 4, 18, -258, 4,101, 5, 98, 105, 6, 15, 2, 45, 33, 88, 72, 16,3};
    cout<<"array elements are"<<endl;
    for(int a=0;a<4;++a){
        for(int b=0;b<5;++b){
            cout<<arr[a][b]<<",";
        }
        cout<<endl;
    }
    return 0;
}
