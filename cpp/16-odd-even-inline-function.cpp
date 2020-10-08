/*
Implement odd/even function in c++.
Demonstrate inline function feature
in this program.
*/

#include <iostream>
using namespace std;

inline bool is_odd(int);

int main()
{
    cout << "Enter any number" << endl;
    int n;
    cin >> n;

    cout << endl;
    if (n) {
        if (is_odd(n))
            cout << "You've entered an odd number" << endl;
        else
            cout << "You've entered an even number" << endl;
    } else
        cout << "You have entered zero" << endl;

    return 0;
}

inline bool is_odd(int n)
{
    if (n % 2)
        return true;
    return false;
}
