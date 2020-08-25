/* Check whether a number is a prime number or not */

#include <iostream>
using namespace std;
bool isprime(int);
int main()
{
	int n;
    cout << "Enter the number which you want to check if it's prime or not: ";
    cin >> n;
    cout << endl;

    if (isprime(n))
        cout << n << " is a prime number" << endl;
    else
        cout << n << " is not a prime number" << endl;

    return 0;
}

bool isprime(int n)
{
    for (int i = 2; i <= n / 2; i++) {
        if (!(n % i))
            return false;
    }
    return true;
}
