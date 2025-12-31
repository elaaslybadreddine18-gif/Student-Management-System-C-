#include <iostream>
using namespace std;

// Class definition
class Student {
public:
    string name;
    string module;
    float td, tp, exam;
    float finalGrade;
};

// Function to input students
void inputStudents(Student students[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "\n--- Student " << i + 1 << " ---\n";

        cout << "Enter student name: ";
        cin >> students[i].name;

        cout << "Enter module name: ";
        cin >> students[i].module;

        cout << "Enter TD grade: ";
        cin >> students[i].td;

        cout << "Enter TP grade: ";
        cin >> students[i].tp;

        cout << "Enter Exam grade: ";
        cin >> students[i].exam;

        // Final grade calculation
        students[i].finalGrade =
            students[i].td * 0.2 +
            students[i].tp * 0.2 +
            students[i].exam * 0.6;
    }
}

// Function to display students
void displayStudents(Student students[], int n) {
    cout << "\n===== Student List =====\n";
    for(int i = 0; i < n; i++) {
        cout << "Name: " << students[i].name << endl;
        cout << "Module: " << students[i].module << endl;
        cout << "Final Grade: " << students[i].finalGrade << endl;

        if(students[i].finalGrade >= 10)
            cout << "Status: Passed ✅\n";
        else
            cout << "Status: Failed ❌\n";

        cout << "------------------------\n";
    }
}

int main() {
    int n = 3;
    Student students[n];

    inputStudents(students, n);
    displayStudents(students, n);

    return 0;
}
