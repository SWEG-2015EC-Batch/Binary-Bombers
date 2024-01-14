#include <iostream>
using namespace std;
int main()
{
    int numPairs=0;
    const int numPeople=5;
    bool friendship[5][5]={{false,true,false,true,true},
                           {true,false,true,false,true},
                           {false,true,false,false,false},
                           {true,false,false,false,true},
                           {true,true,false,true,false}
                           };
     for (int i = 0; i <numPeople ; ++i) {
        for (int j = i + 1; j < numPeople; ++j) {
            if (friendship[i][j] && friendship[j][i]) {
                numPairs++;
            }
        }
    }
    cout<<"number of friend pairs : "<<numPairs<<endl;


    return 0;
}

