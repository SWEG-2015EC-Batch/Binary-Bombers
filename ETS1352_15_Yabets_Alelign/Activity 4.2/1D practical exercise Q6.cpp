#include <iostream>
using namespace std;
int main()
{
    int Number;
    cout<<"Please enter the number of list of numbers"<<endl;
    cin>>Number;
    int OriginalNumber[Number];
    int EvenNumInRev[Number];
    int numEven = 0;
    cout<<"Enter a list of numbers"<<endl;
    for (int a = 0; a < Number; ++a)
        {
        cin>>OriginalNumber[a];
        if (OriginalNumber[a] % 2 == 0) {
            EvenNumInRev[numEven] = OriginalNumber[a];
            numEven++;
        }
    }
    cout<<"Reversed even numbers of list"<<endl;
    for (int a = numEven - 1; a >= 0; --a) {
        cout<<EvenNumInRev[a]<<"\t";
    }
    return 0;
}
