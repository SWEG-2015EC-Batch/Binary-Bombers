#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Enter the number of persons: ";
    cin >> N;

    float hw[N][2], bmi[N];
    string name[N];
    float (*hwptr)[2] = hw, *bptr = bmi;
    string *nptr = name;

    for(int i = 0; i < N; i++, hwptr++, nptr++) {
        cout << "Enter name, height(m), and weight(kg) for person " << i+1 << ": ";
        cin >> *nptr >> (*hwptr)[0] >> (*hwptr)[1];
        bptr[i] = (*hwptr)[1] / ((*hwptr)[0] * (*hwptr)[0]);
    }

    cout << "Name\tHeight\tWeight\tBMI\n";
    for(int i = 0; i < N; i++) {
        cout << name[i] << "\t" << hw[i][0] << "\t" << hw[i][1] << "\t" << bmi[i] << "\n";
    }

    return 0;
}
