//Write a C++ program to swap two number by both call by value and call by reference mechanism
//using two functions swap_value() and swap_reference respectively
//by getting the choice from the user and executing the user’s choice by switch-case.
#include <iostream>
using namespace std;
void swap_value(int x, int y) //it contain only values.
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "after swaping by value:" << x << "and" << y;
}
void swap_refrence(int *x, int *y) //it cointain refrence values.
{
    int *temp;
    temp = x;
    x = y;
    y = temp;
    cout << "after swaping by refrence: " << *x << "and" << *y;
    //printf("\n%d", x + 10);
}

int main()
{
    int i, j, k;
    //program for swap two values.

    cout << "how would you prefer to swap \n choose 1 for call by value and choose 2 for call by refrence :\n";
    cin >> i;
    cout << "enter first number : \n";
    cin >> j;
    cout << "enter second number : \n";
    cin >> k;
    switch (i)
    {
    case 1:
        swap_value(j, k);
        break;
    case 2:
        swap_refrence(&j, &k);
        break;

    default:
        cout << "enter proper choise";
        break;
    }
}