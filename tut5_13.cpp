/*
Write a program to find the largest of three integers using a swap function. The
function accepts integer arguments by reference.
*/
#include <bits/stdc++.h>
using namespace std;
class swap1
{
public:
    int n;
};
void larger(int &x, int &y, int &z)
{
    if (x > y)
    {
        if (z > x)
            cout << "Largest inrtger is " << z << endl;
        else
            cout << "Largest inrtger is " << x << endl;
    }
    else
    {
        if (z > y)
            cout << "Largest inrtger is " << z << endl;
        else
            cout << "Largest inrtger is " << y << endl;
    }
}
int main()
{
    swap1 a, b, c;
    cout << "Enter value of a,b,c : " << endl;
    cin >> a.n >> b.n >> c.n;
    larger(a.n, b.n, c.n);
    return 0;
}