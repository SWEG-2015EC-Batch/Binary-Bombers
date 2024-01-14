#include <iostream>
using namespace std;
int main()
{
    int NumPairs=0;
    const int NumPeople=5;
    bool Friendship[5][5]={{false,true,false,true,true},
                           {true,false,true,false,true},
                           {false,true,false,false,false},
                           {true,false,false,false,true},
                           {true,true,false,true,false}
                           };
     for (int a=0;a<NumPeople;++a) {
        for (int b=a+1;b<NumPeople; ++b)
            {
            if (Friendship[a][b] && Friendship[b][a]) {
                NumPairs++;
            }
        }
    }
    cout<<"The number of friend pairs will be: "<<NumPairs<<endl;


    return 0;
}

