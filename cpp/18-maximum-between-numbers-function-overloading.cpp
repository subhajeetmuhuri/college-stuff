/*
Using function overloading feature of c++,
find the maximum of 2, 3 and 4 inputted numbers.
*/

#include <iostream>
using namespace std;

void input(int &, int &, int &, int &, int);
inline int max(int, int);
inline int max(int, int, int);
inline int max(int, int, int, int);

int main()
{
    for(;;) {
        cout << endl << "1. Get maximum among 2 numbers" << endl;
        cout << "2. Get maximum among 3 numbers" << endl;
        cout << "3. Get maximum among 4 numbers" << endl;
        cout << "4. Exit this program" << endl << endl;
        cout << "Enter your choice:" << endl;
        int choice;
        cin >> choice;

        int a, b, c, d;
        input(a, b, c, d, choice);

        cout << endl;
        switch (choice) {
            case 1:
                cout << "Maximum among " << a << " and ";
                cout << b << " is " << max(a, b) << endl;
                break;
            
            case 2:
                cout << "Maximum among " << a << ", " << b;
                cout << " and " << c << " is " << max(a, b, c) << endl;
                break;
            
            case 3:
                cout << "Maximum among " << a << ", " << b << ", " << c;
                cout << " and " << d << " is " << max(a, b, c, d) << endl;
                break;
            
            case 4:
                exit(0);
            
            default:
                cout << "Invalid choice" << endl;
        }
    }

    return 0;
}

void input(int &a, int &b, int &c, int &d, int choice)
{
    if (choice == 1 || choice == 2 || choice == 3) {
        cout << endl << "Enter the 1st number" << endl;
        cin >> a;
        cout << endl << "Enter the 2nd number" << endl;
        cin >> b;

        if (choice == 2 || choice == 3) {
            cout << endl << "Enter the 3rd number" << endl;
            cin >> c;

            if (choice == 3) {
                cout << endl << "Enter the 4th number" << endl;
                cin >> d;
            }
        }
    }
}

inline int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

inline int max(int a, int b, int c)
{
    if (a > b) {
        if (a > c)
            return a;
        return c;
    } else {
        if (b > c)
            return b;
        return c;
    }
}

inline int max(int a, int b, int c, int d)
{
    int max = a;

    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;

    return max;
}
