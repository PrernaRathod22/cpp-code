/*
Create a C++ program to convert temperature in Fahrenheit to celcius and display.
Use class

c=5/9 * (f-32)
*/
#include <bits/stdc++.h>
using namespace std;
class converter
{
    float f;
    float c;

public:
    void setdata()
    {
        cout << "Enter temperature in fehrenheit : ";
        cin >> f;
    }
    void convert();
    void disply();
};
void converter ::convert()
{
    c = (f - 32) * 5 / 9;
    // c = 12;
}
void converter ::disply()
{
    cout << "temp. in fahrenhit is " << f << " and in c " << c << endl;
}
int main()
{
    converter c1, c2;
    c1.setdata();
    c1.convert();
    c1.disply();

    c2.setdata();
    c2.convert();
    c2.disply();
    return 0;
}