/*
Create a class with string pointer as data member and member functions:
*/
#include <bits/stdc++.h>
using namespace std;
class member
{
public:
    int x, y;
};

int main()
{
    member m1, ob;
    member *ptr = &ob;
    int member::*p1 = &member::x;
    int member::*p2 = &member::y;

    m1.*p1 = 10;
    m1.*p2 = 22;
    cout << "Value of x is : " << m1.*p1 << "\n";
    cout << "Value of y is : " << m1.*p2 << "\n";

    int member::*q1 = &member::x;
    int member::*q2 = &member::y;
    ptr->*q1 = 90;
    ptr->*q2 = 99;

    cout << "Value of a is : " << ptr->*p1 << "\n";
    cout << "Value of b is : " << ptr->*p2 << "\n";
    return 0;
}