/*
Define a class. Include necessary member functions to take
input, display, to check whether the number is +ve or -ve,
prime, Armstrong, and perfect.
*/

#include <iostream>
#include <math.h>
using namespace std;

class number {
    private:
        int n;
    public:
        void input();
        void display();
        int ispositive();
        bool isprime();
        bool isarmstrong();
        bool isperfect();
        int getnumber();
};

int main()
{
    number m;

    m.input();
    m.display();

    if (m.ispositive() == 1)
        cout << m.getnumber() << " is a +ve number" << endl;
    else if (m.ispositive() == 2)
        cout << m.getnumber() << " is a -ve number" << endl;

    if (m.isprime())
        cout << m.getnumber() << " is a prime number" << endl;
    else
        cout << m.getnumber() << " is not a prime number" << endl;

    if (m.isarmstrong())
        cout << m.getnumber() << " is an armstrong number" << endl;
    else
        cout << m.getnumber() << " is not an armstrong number" << endl;

    if (m.isperfect())
        cout << m.getnumber() << " is a perfect number" << endl;
    else
        cout << m.getnumber() << " is not a perfect number" << endl;

    return 0;
}

inline void number::input()
{
    cout << "Enter a number:" << endl;
    cin >> n;
}

inline void number::display()
{
    cout << "You have entered " << n << endl;
}

inline int number::ispositive()
{
    if (n > 0)
        return 1;
    else if (n < 0)
        return 2;
    else
        return 0;
}

bool number::isprime()
{
    for (int i = 2; i < n / 2; i++) {
        if (!(n % i)) {
            return false;
        }
    }

    return true;
}

bool number::isarmstrong()
{
    int m = n, count = 0, sum;

    for (int p = m; p > 0; count++, p = p / 10);

    for (sum = 0; m > 0; m = m / 10)
        sum = sum + pow(m % 10, count);

    if (n == sum)
        return true;
    else
        return false;
}

bool number::isperfect()
{
    int sum = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (!(n % i)) {
            sum = sum + i;
        }
    }

    if (n == sum)
        return true;
    else
        return false;
}

inline int number::getnumber()
{
    return n;
}