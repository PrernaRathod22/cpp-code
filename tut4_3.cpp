//Write a C++ program to create an inline function add which takes two integer numbers as arguments
//performs addition and display the result.
#include <bits/stdc++.h>
using namespace std;

inline int addition(int a, int b)
{
    return (a + b);
}
int main()
{
    int j, k;
    cin >> j >> k;
    cout << addition(j, k);
    return 0;
}