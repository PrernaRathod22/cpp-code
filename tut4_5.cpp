//Write a program to demonstrate use of function overloading.
#include <bits/stdc++.h>
using namespace std;
void func1(int a)
{
    cout << "it is a int" << a << endl;
}
void func1(double a)
{
    cout << "it is a float" << a << endl;
}
void func1(char a)
{
    cout << "it is a char" << a << endl;
}
void func1(string a)
{
    cout << "it is a string" << a << endl;
}

int main()
{
    func1(10);
    func1(10.22);
    func1("monika");
    func1('j');

    return 0;
}