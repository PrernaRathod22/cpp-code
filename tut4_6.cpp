/*

Create a function called reverse () that takes two parameters. The first parameter, 
called str is a pointer to a string that will be reversed upon return from the function. 
The second parameter is called count, and it specifies how many characters of str to 
reverse. Give count a default value that, when present, tells reverse () to reverse the 
entire string. Write a program to demonstrate the use of arrays within a class

*/
#include <bits/stdc++.h>
using namespace std;

void reverse(char *str, int n)
{
    char *begin_ptr, *end_ptr, ch;

    begin_ptr = str;
    end_ptr = str;

    for (int i = 0; i < n - 1; i++)
        end_ptr++;

    for (int i = 0; i < n / 2; i++)
    {

        // swap character
        ch = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = ch;

        // update pointers positions
        begin_ptr++;
        end_ptr--;
    }
}
int main()
{
    char str[100];
    int n;
    cout << "Enter a string : ";
    cin >> str;
    n = strlen(str);
    reverse(str, n);
    cout << str;
    return 0;
}