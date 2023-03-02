// //student structure in multiple input(loop)
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
    int n;
    cout<<"Enter Total Students = ";
    cin>>n;
    student s[n];
    for(int i=0 ; i< n ; i++)
    {
        cout<<"\nTotal Student = "<<n;
        cout<<"\n\nEnter "<<i+1<<" student detail \n";
        cout << "Enter Name = ";
        cin >> s[i].std_name;
        cout << "Enter DOB (DD/MM/YYYY) = ";
        cin >> s[i].std_dob;
        cout << "Enter Roll = ";
        cin >> s[i].std_roll;
        cout << "Enter Marks = ";
        cin >> s[i].std_marks;
        cout << "Enter Branch = ";
        cin >> s[i].std_branch;
    }
    for(int i=0 ; i<n ; i++)
    {
        cout<<endl<<i+1<<" student detail";
        cout<<"\nName : "<< s[i].std_name<<endl;
        cout<<"DOB : "<<s[i].std_dob<<endl;

        cout<<"Roll no. : "<<s[i].std_roll<<endl;
        cout<<"Marks : "<<s[i].std_roll<<endl;
        cout<<"Branch : "<<s[i].std_branch<<endl;

    }
}
