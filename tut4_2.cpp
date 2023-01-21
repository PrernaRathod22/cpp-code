//Write a C++ program to create a function minimum which takes two arguments values read from user
//finds the minimum value and return the reference to the variable.
#include <bits/stdc++.h>
using namespace std;
int &minimum(int &x, int &y)
{
    x = min(x, y);
    return x;
}
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int &a = minimum(num1, num2);
    cout << a;
    return 0;
}
