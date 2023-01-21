/*
Create a String class that includes all the string-related functions. Like Length,
copy, compare, concatenation, sub string search (Without using inbuilt string
functions).
*/
#include <bits/stdc++.h>
using namespace std;
class stringfunc
{
    char s[100];

public:
    void setdata()
    {
        cout << "enter a string : \n";
        cin >> s;
    }
    void length()
    {
        int i = 0;
        while (s[i] != '\0')
        {
            i++;
        }
        cout << "length is "
             << i << endl;
    }
    void compare()
    {
        char s22[100];
        int n;
        cout << "Enter another string : \n";
        cin >> s22;
        n = strcmp(s, s22);
        if (n == 0)
            cout << "Both are same\n";
        else
            cout << "both are not same\n";
    }
    void concate()
    {
        char s22[100];
        int n;
        cout << "Enter another string : \n";
        cin >> s22;
        strcat(s, s22);
        cout << "your concated stering is "
             << s << endl;
        ;
    }
    void search()
    {
        char *ptr, s22[100];
        int n;
        cout << "Enter another string : \n";
        cin >> s22;
        ptr = strstr(s, s22);
        cout << ptr;
    }
};
int main()
{
    stringfunc s1, s2;
    s1.setdata();
    s1.length();
    s1.compare();
    s1.concate();
    s1.search();

    return 0;
}