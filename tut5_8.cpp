/*
Create a program to understand and use static members and static member functions.
*/
#include <bits/stdc++.h>
using namespace std;
class staticmember
{
public:
    static int a;
    int x;
    staticmember(int x = 10)
    {
        x = x;
        ++a;
    }
    void disply()
    {
        cout << "value of x is " << x << endl;
    }
};
int staticmember::a = 0;
int main()
{
    staticmember s1(12), s2(45), s3(56), s4(52);
    s1.disply();
    s2.disply();
    s3.disply();
    cout << "number of objects is " << staticmember::a;
    return 0;
}