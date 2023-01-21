/*
Design classes named Triangle, Square, and Circle. Make the different function in
each class to find areas of particular shape.
*/
#include <bits/stdc++.h>
using namespace std;
class triangle
{
    double base, divider;

public:
    void area()
    {
        cout << "Enter a base and divider of triangle : ";
        cin >> base >> divider;
        double area = 0.5 * (base * divider);
    }
};

class square
{
    double length;

public:
    void area()
    {
        cout << "Entrr a length of triangle : ";
        cin >> length;
        double area = length * length;
        cout << "area of square is " << area;
    }
};

class circle
{
    double radius;

public:
    void area()
    {
        cout << "Enter a radius of circle :";
        cin >> radius;
        double area = 3.14 * radius * radius;
        cout << "area of square is " << area;
    }
};

int main()
{
    int n;
    do
    {
        cout << "\n\nEnetr 1 for area of square,\nEnetr 2 for area of circle,\nEnetr 3 for area of triangle,\nhit 0 for exit" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            /* code */
            square s1;
            s1.area();
            break;

        case 2:
            /* code */
            circle c1;
            s1.area();
            break;

        case 3:
            /* code */
            triangle t1;
            s1.area();
            break;

        default:
            break;
        }
    } while (n != 0);

    return 0;
}