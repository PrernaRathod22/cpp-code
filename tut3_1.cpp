#include <iostream>
using namespace std;
int main()
{
    int num, fact = 1;
    cout << "enter a number : ";
    std ::cin >> num;

    for (int i = num; i > 1; i--)
    {
        fact = fact * i;
    }
    cout << fact;
}