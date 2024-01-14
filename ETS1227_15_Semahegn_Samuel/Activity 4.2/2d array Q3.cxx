#include <iostream>
#include <iomanip>
using namespace std;

// Declare the function prototype
void printScoreLevel(double totalScore);

int main() {

    double test;
    double assignment;
    double quiz;
    double project;
    double final;

    cout << "Enter exam scores (out of 100):\n";
    cout << "Enter Test score: ";
    cin >> test;
    cout << "Enter Assignment score: ";
    cin >> assignment;
    cout << "Enter Quiz score: ";
    cin >> quiz;
    cout << "Enter Project score: ";
    cin >> project;
    cout << "Enter Final score: ";
    cin >> final;

    double totalMark = test + assignment + quiz + project + final;

    // Print the results
    cout << "\nExam Scores and Total Mark:\n";
    cout << setw(15) << "Exam Type" << setw(15) << "Score" << "\n";
    cout << "---------------------------------\n";
    cout << setw(15) << "Test" << setw(15) << test << "\n";
    cout << setw(15) << "Assignment" << setw(15) << assignment << "\n";
    cout << setw(15) << "Quiz" << setw(15) << quiz << "\n";
    cout << setw(15) << "Project" << setw(15) << project << "\n";
    cout << setw(15) << "Final" << setw(15) << final << "\n";
    cout << "---------------------------------\n";
    cout << setw(15) << "Total Mark" << setw(15) << totalMark << "\n";
    cout << setw(15) << "Score Level" << setw(15);
    printScoreLevel(totalMark);
    cout << "\n";

    return 0;
}

// Define the function to print the score level
void printScoreLevel(double totalScore) {
    if (totalScore >= 80) {
        cout << "Excellent";
    } else if (totalScore >= 60) {
        cout << "Very Good";
    } else if (totalScore >= 50) {
        cout << "Fair";
    } else if (totalScore >= 40) {
        cout << "Poor";
    } else {
        cout << "Fail";
    }
}
