//student structure in single input

#include <iostream>
#include<string>
using namespace std;

struct student
{
    char std_name[50];
    char std_dob[10];
    int std_roll;
    int std_marks;
    char std_branch[30];
};
int main()
{
    student s;
    cout << "Enter Name = ";
    cin.get(s.std_name,50);
    cout << "Enter DOB (DD/MM/YYYY) = ";
    cin >> s.std_dob;
    cout << "Enter Roll = ";
    cin >> s.std_roll;
    cout << "Enter Marks = ";
    cin >> s.std_marks;
    cout << "Enter Branch = ";
    cin >> s.std_branch;

    cout<<"\nName : "<< s.std_name<<endl;
    cout<<"DOB : "<<s.std_dob<<endl;
    cout<<"Roll no. : "<<s.std_roll<<endl;
    cout<<"Marks : "<<s.std_marks<<endl;
    cout<<"Branch : "<<s.std_branch<<endl;
}
