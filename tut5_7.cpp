/*
Create a 'DISTANCE' class with : - feet and inches as data members, - member
function to input distance- member function to output distance- member function to
add two distance objects. Write a main function to create objects of DISTANCE
class. Input two distances and output the sum
*/
#include <bits/stdc++.h>
using namespace std;
class distance1
{
    float feet, inches;

public:
    void input(float x, float y)
    {
        feet = x;
        inches = y;
    }
    void output()
    {
        cout << "Distence in feet is " << feet << "\ndistance in inches is : " << inches << endl;
    }
    void add(distance1 d1, distance1 d2)
    {
        distance1 d3;
        d3.feet = d2.feet + d1.feet;
        d3.inches = d2.inches + d1.inches;
        cout << "ADDED Distence in feet is " << d3.feet << "\ndistance in inches is : " << d3.inches << endl;
    }
};
int main()
{
    distance1 d1, d2;

    d1.input(8.3, 52.6);
    d2.input(102.3, 25.36);

    d1.output();
    d2.output();

    d1.add(d1, d2);
    return 0;
}