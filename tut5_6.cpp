/*
Define a class to represent a bank account. Include the members like name of the
depositor, account number, type of account, and balance amount in the account.
Make functions (1) To assign initial values, (2) To deposit an amount, (3) To
withdraw an amount after checking the balance, (4) To display name and balance.
Write a main program to test the program
*/
#include <bits/stdc++.h>
using namespace std;
class bank
{
    double balance;

public:
    string name;
    void assignintial(int n)
    {
        balance = n;
    }
    void deposit(int z)
    {
        balance += z;
    }
    void withdraw(int x)
    {
        if (balance >= x)
        {
            balance -= x;
        }
        else
            cout << "unsufficient balance" << endl;
    }
    void disply()
    {
        cout << "current balance is " << balance << endl;
    }
};
int main()
{
    bank b1;
    int n;
    do
    {
        cout << "\n\nEnetr 1 for assign initial value,\nEnetr 2 for add ammount,\nEnetr 3 for withdraw ammount,\nEnetr 4 for disply value,\nhit 0 for exit" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            double n1;
            cout << "Enetr a value which you want to enter : ";
            cin >> n1;
            b1.assignintial(n1);
            break;

        case 2:

            double n2;
            cout << "how many amout you want to enter : ";
            cin >> n2;
            b1.disply();
            b1.deposit(n2);
            b1.disply();
            break;

        case 3:
            double n3;
            cout << "how many amout you want to withdraw : ";
            cin >> n3;
            b1.disply();
            b1.withdraw(n3);
            b1.disply();
            break;
        case 4:
            b1.disply();

        default:
            break;
        }
    } while (n != 0);

    return 0;
}