#include <iostream>

using namespace std;

struct Students{

 int uniqueID[10];
 int semestersComplete[10];
 int creditsCompleted[10];
 double cgpa[10];




};

int main() {
     Students s1;
       for (int i = 0; i < 10; ++i) {
        cout << "Enter information for Student " << i + 1 << ":" << endl;
        s1.uniqueID[i] = i + 1;
        cout<<"Enter student ID:";
        cin>> s1.uniqueID[i];
        cout << "Number of semesters complete: ";
        cin >> s1.semestersComplete[i];
        cout << "Number of credits completed: ";
        cin >> s1.creditsCompleted[i];
        cout << "CGPA: ";
        cin >> s1.cgpa[i];
        cout << endl;
    }

    cout << "Scholarship students (CGPA >= 3.75):" << endl;
    for (int i = 0; i < 10; ++i) {
        if (s1.cgpa[i] >= 3.75) {
            cout << "Student ID: " << s1.uniqueID[i] << endl;
        }
    }
    cout << "Students with more than 50 credits completed:" << endl;
    for (int i = 0; i < 10; ++i) {
        if (s1.creditsCompleted[i] > 50) {
            cout << "Student ID: " << s1.uniqueID[i] << endl;
        }
    }
    cout << "\nStudents with at least 2 semesters and 28 credits completed:" << endl;
    for (int i = 0; i < 10; ++i) {
        if (s1.semestersComplete[i] >= 2 && s1.creditsCompleted[i] >= 28) {
            cout << "Student ID: " << s1.uniqueID[i] << endl;
        }
    }

    return 0;
}
