#include <iostream>
#include <vector>
#include <iomanip> 

using namespace std;

int main() {
    int numSubjects;
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    vector<float> grades(numSubjects);
    vector<int> credits(numSubjects);

    float totalGradePoints = 0;
    int totalCredits = 0;

    for (int i = 0; i < numSubjects; ++i) {
        cout << "\nSubject " << i + 1 << ":\n";
        cout << "Enter Grade (out of 10): ";
        cin >> grades[i];
        cout << "Enter Credit: ";
        cin >> credits[i];

        totalGradePoints += grades[i] * credits[i];
        totalCredits += credits[i];
    }

    float cgpa = totalGradePoints / totalCredits;

    // Output
    cout << "\n-------------------------------------\n";
    cout << fixed << setprecision(2);
    cout << "Total Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "Your CGPA is: " << cgpa << endl;
    cout << "-------------------------------------\n";

    return 0;
}

