/*
Create a class employee with suitable members and functions. Create an array of
objects and demonstrate the use of the class using the main function.
*/
#include <bits/stdc++.h>
using namespace std;

class employee
{
    int salary;
    string name;

public:
    void setdata()
    {
        cout << "Enter name of employee : ";
        cin >> name;
        cout << "Enter salary of employee : ";
        cin >> salary;
    }
    void disply()
    {
        cout << "name - " << name << " salary " << salary << endl;
    }
};
int main()
{
    employee E[3];
    for (int i = 0; i < 3; i++)
    {
        E[i].setdata();
        E[i].disply();
    }

    return 0;
}