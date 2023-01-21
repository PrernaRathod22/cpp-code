//Write a C++ program to demonstrate use of enum.
#include <iostream>
using namespace std;
enum shape
{
    circle,
    round,
    square
};

int main()
{
    cout << "enter shape code : ";
    int code;
    cin >> code;
    switch (code)
    {
    case circle:
        cout << "you are in circle";
        break;
    case square:
        cout << "you are in square";
        break;
    case round:
        cout << "you are in round";
        break;

    default:
        cout << "enter proper code";
        break;
    }

    return 0;
}