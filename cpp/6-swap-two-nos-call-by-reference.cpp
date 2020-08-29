/* A program to swap two numbers demonstrating call by reference in c++ */

#include <iostream>
using namespace std;
void swap(int &, int &);
int main()
{
    int a, b;
    cout << "Enter two numbers which you want to swap: " << endl;
    cin >> a >> b;
    cout << "Before swapping, a = " << a << " and b = " << b << endl;
    swap(a, b);
    cout << "After swapping, a = " << a << " and b = " << b << endl;
}

void swap(int &a, int &b)
{
    int t;
    t = a;
    a = b;
    b = t;
}
