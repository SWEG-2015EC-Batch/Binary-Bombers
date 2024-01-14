#include<iostream>
#include<string>

using namespace std;
string getScoreLevel(float totalMarks) {
    if (totalMarks >= 80) {
        return "Excellent";
    } else if (totalMarks >= 60) {
        return "Very Good";
    } else if (totalMarks >= 50) {
        return "Fair";
    } else if (totalMarks >= 40) {
        return "Poor";
    } else {
        return "Fail";
    }
}

int main() {

     int NumStudents;
     cout<<"Please enter number of students"<<endl;
     cin>>NumStudents;
    int totalMarks[NumStudents];
    string scoreLevel[NumStudents];

    for (int i = 0; i <NumStudents; ++i) {
        cout << "Enter total marks for student " << i + 1 << ": ";
        cin >> totalMarks[i];
        scoreLevel[i] = getScoreLevel(totalMarks[i]);
    }

    cout << "Student\tTotal Marks\tScore Level\n";
    cout << "--------------------------------\n";

    for (int i = 0; i < numStudents; ++i) {
        cout << i + 1 << "\t" << totalMarks[i] << "\t\t" << scoreLevel[i] << "\n";
    }

    return 0;
}
