#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    string subjects[3];
    int maxMarks[3];
    int minMarks[3];
    int obtainMarks[3];
public:
    void setData(int rollNo, string name, string sub1, string sub2, string sub3) {
        this->rollNo = rollNo;
        this->name = name;
        subjects[0] = sub1;
        subjects[1] = sub2;
        subjects[2] = sub3;
        for(int i=0; i<3; i++) {
            cout << "Enter max marks for " << subjects[i] << ": ";
            cin >> maxMarks[i];
            cout << "Enter min marks for " << subjects[i] << ": ";
            cin >> minMarks[i];
            cout << "Enter obtain marks for " << subjects[i] << ": ";
            cin >> obtainMarks[i];
        }
    }

    void showResult() {
        cout << "Roll No.: " << rollNo << endl;
        cout << "Name: " << name << endl;
        for(int i=0; i<3; i++) {
            cout << subjects[i] << ":\t" << obtainMarks[i] << "/" << maxMarks[i] << endl;
        }
        float totalMarks = obtainMarks[0] + obtainMarks[1] + obtainMarks[2];
        float percentage = (totalMarks / (maxMarks[0] + maxMarks[1] + maxMarks[2])) * 100;
        cout << "Percentage: " << percentage << "%" << endl << endl;
    }
};

int main() {
    Student students[3];

    for(int i=0; i<3; i++) {
        int rollNo;
        string name, sub1, sub2, sub3;

        cout << "Enter details of student " << i+1 << endl;
        cout << "Roll No.: ";
        cin >> rollNo;
        cout << "Name: ";
        cin.ignore(); // To clear input buffer
        getline(cin, name);
        cout << "Enter name of three subjects: ";
        cin >> sub1 >> sub2 >> sub3;

        students[i].setData(rollNo, name, sub1, sub2, sub3);
    }

    cout << endl << "Result of all students:" << endl << endl;

    for(int i=0; i<3; i++) {
        students[i].showResult();
    }

    return 0;
}
