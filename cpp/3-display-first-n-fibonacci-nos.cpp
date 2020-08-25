/* Display first n fibonacci numbers */

#include <iostream>
using namespace std;
int main()
{
	int n;
    cout << "This program will display first n fibonacci numbers." << endl;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << endl;

    int a, b, c, count;
    cout << "First " << n << " fibonacci numbers are as follows: ";
    for (a = 0, b = 1, count = 1; count <= n; count++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;

    return 0;
}