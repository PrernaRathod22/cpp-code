/*
Create a class student with student name and age as data members. Define functions
to read and display the data members.
*/
#include <bits/stdc++.h>
using namespace std;

class student
{
    int age;
    string s;

public:
    void input();
    void disply();
};
void student::input()
{
    cout << "Enter a name of student :";
    cin >> s;
    cout << "\enter his/her age : ";
    cin >> age;
}
void student::disply()
{
    cout << "name : " << s << endl;
    cout << "age : " << age << endl;
}
int main()
{
    student s1, s2, s3;
    s1.input();
    s1.disply();

    s2.input();
    s2.disply();

    s3.input();
    s3.disply();
    return 0;
}