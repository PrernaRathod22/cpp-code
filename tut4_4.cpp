//Write a C++ program to calculate area of circle by creating a function area_c
//which calculates area of circle. The function area_c has two arguments : first is the radius value
//which is read from user and second argument is value of Pi should be provided as default argument. Finally
//display the value of area calculated by the function.
#include <bits/stdc++.h>
using namespace std;

double area_c(double rad, double pi = 22 / 7)
{
    double area = pi * rad * rad;
    cout << area;
    return 0;
}
int main()
{
    int j;
    cin >> j;
    area_c(j);

    return 0;
}