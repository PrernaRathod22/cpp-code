/*
Design a simple class with all arithmetic function. Use them in MAIN function.
*/
#include <bits/stdc++.h>
using namespace std;

class arithmetic
{
    int a, b;

public:
    void setdata(int n1, int n2);
    void sum();
    void disply();
};

void arithmetic ::setdata(int n1, int n2)
{
    a = n1;
    b = n2;
}
void arithmetic ::sum()
{
    ++a;
    --b;
}
void arithmetic ::disply()
{
    cout << "value of a is " << a << " and b is " << b << endl;
}

int main()
{
    arithmetic a1, a2;
    a1.setdata(2, 9);
    a1.disply();
    a1.sum();
    a1.disply();

    a1.setdata(12, 14);
    a1.disply();
    a1.sum();
    a1.disply();

    return 0;
}