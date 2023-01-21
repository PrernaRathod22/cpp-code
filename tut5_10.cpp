/*
Create a class time with members hours and minutes. Write a member function
‘add’ which takes 2 arguments of type class time and demonstrate the use with a
main program.
*/
#include <bits/stdc++.h>
using namespace std;
class time1
{
private:
    double sec;
    double min;

public:
    void setdata(double x1, double y1)
    {
        min = x1;
        sec = y1;
    }
    void add(time1 t1, time1 t2)
    {
        double hour = t1.min / 60 + t1.sec / 3600;
        double hour1 = t2.min / 60 + t2.sec / 3600;
        cout << " total time of t1 is " << hour;
        cout << " total time of t2 is " << hour1;
    }
};
int main()
{
    time1 t1, t2, t3;
    t1.setdata(60, 2.3);
    t2.setdata(5.36, 45.2);
    t3.add(t1, t2);
    return 0;
}