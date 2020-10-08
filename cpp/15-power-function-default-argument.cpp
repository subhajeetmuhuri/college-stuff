/*
Implement a function in c++ to find the result of
a number 'n' raised to the power 'm'. Demonstrate
default argument feature of c++ by setting m = 2
when the value of m is not provided by the user.
*/

#include <iostream>
using namespace std;

int power(int, int = 2);

int main()
{
    cout << "Enter the value of n" << endl;
    int n;
    cin >> n;
    
    cout << endl << "1. Get the square of n" << endl;
    cout << "2. Get the value of (n ^ m)" << endl;
    int choice;
    cout << endl << "Enter your choice" << endl;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << endl << "Square of " << n << " = " << power(n) << endl;
            break;

        case 2:
            cout << endl << "Enter the value of m" << endl;
            int m;
            cin >> m;
            cout << "(" << n << " ^ " << m << ") = " << power(n, m) << endl;
            break;
        
        default:
            cout << endl << "Wrong choice" << endl;
    }

    return 0;
}

int power(int n, int m)
{
    for (int i = 1, p = n; i < m; i++)
        n = n * p;

    return n;
}
