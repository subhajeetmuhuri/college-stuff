/*
Implement a function in c++ which increments
the value of a variable by 1.
*/

#include <iostream>
using namespace std;

inline void increment(int &);

int main()
{
    cout << "Enter any number" << endl;
    int n;
    cin >> n;

    while (1) {
        cout << endl << "Do you want to increment " << n << " by 1 (y/n)?" << endl;
        char choice;
        cin >> choice;

        cout << endl;
        if (choice == 'y') {
            increment(n);
            cout << "Your number is now " << n << endl;
        } else if (choice == 'n')
            exit(0);
        else
            cout << "Please enter either 'y' or 'n'" << endl;
    }

    return 0;
}

inline void increment(int &n)
{
    n++;
}
