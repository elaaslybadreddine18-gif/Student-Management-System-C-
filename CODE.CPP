#include <iostream>
using namespace std;

// Class definition
class Student {
public:
    string name;
    float grade;
};

// Function to input students
void inputStudents(Student students[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Enter name: ";
        cin >> students[i].name;
        cout << "Enter grade: ";
        cin >> students[i].grade;
    }
}

// Function to display students
void displayStudents(Student students[], int n) {
    cout << "\nStudent List:\n";
    for(int i = 0; i < n; i++) {
        cout << "Name: " << students[i].name
             << " | Grade: " << students[i].grade << endl;
    }
}

int main() {
    int n = 3;
    Student students[n];

    inputStudents(students, n);
    displayStudents(students, n);

    return 0;
}
