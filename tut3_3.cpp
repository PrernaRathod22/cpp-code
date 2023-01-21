//Write a function that creates a vector of user given size M using new operator.
//Demonstrate the use of the function.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, m;

    cout << "enter size of array :" << endl;
    cin >> m;
    int *p = new int[m - 1];
    for (i = 0; i < m; i++)
    {
        cout << "enter element :  " << endl;
        cin >> p[i];
    }
    //delete p;
    for (i = 0; i < m; i++)
    {
        cout << "element is :  " << p[i] << endl;
        // cin>>p[i];
    }
    delete p;
    return 0;
}