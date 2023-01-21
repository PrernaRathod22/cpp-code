//Write a program to create a function prime which accepts an integer number as argument
//finds whether the number is prime or not and display the result.
#include <bits/stdc++.h>
using namespace std;
int prime(int x)
{
    int count = 0;
    for (int i = 2; i < x; i++)
    {
        if ((x % i) == 0)
            count++;
    }
    if (count == 0)
    {
        cout << "it is prime number..";
    }
    else
        cout << "it is not an prime number....!!";
    return 0;
}
int main()
{
    int num;
    cin >> num;
    prime(num);
    return 0;
}