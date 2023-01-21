/*
Write a program to demonstrate the use of arrays within a class. Create and manage
an inventory system
*/
#include <bits/stdc++.h>
using namespace std;
class inventory
{
    int a[3];

public:
    void setdata(void)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter " << i + 1 << " number";
            cin >> a[i];
        }
    }
    void disply()
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[j] << "\t";
        }
    }
};
int main()
{
    inventory c1;
    c1.setdata();
    c1.disply();
    return 0;
}