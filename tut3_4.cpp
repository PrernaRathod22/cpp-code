//Write a function that creates an array of user given size using new operator.
#include <bits/stdc++.h>
using namespace std;

void forarray(int cpy)
{
    int *p = new int[cpy];
    cout << "enter array elements :\n"
         << endl;
    for (int i = 0; i < cpy; i++)
    {
        cin >> p[i];
    }
    cout << "your array elements is:\n"
         << endl;
    for (int i = 0; i < cpy; i++)
    {
        cout << p[i] << endl;
    }
}
int main()
{
    int size;
    cout << "enterr size of array :";
    cin >> size;
    forarray(size);
    return 0;
}