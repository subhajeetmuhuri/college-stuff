/*
Find the area of a circle, rectangle and triangle
demonstrating the function overloading feature in c++
*/

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

float area(float);
float area(float, float);
float area(float, float, float);

int main()
{
    for (;;) {
        cout << endl << "MENU:" << endl;
        cout << "1. Calculate area of a circle" << endl;
        cout << "2. Calculate area of a rectangle" << endl;
        cout << "3. Calculate area of a triangle" << endl;
        cout << "4. Exit this program" << endl << endl;
        cout << "Enter your choice:" << endl;
        int n;
        cin >> n;
        cout << fixed << setprecision(2);
        switch (n) {
            case 1:
                cout << endl << "Enter the radius of the circle" << endl;
                float r;
                cin >> r;
                cout << endl << "Area of the circle is " << area(r) << endl;
                break;
            case 2:
                cout << endl << "Enter the length and breadth of the rectangle" << endl;
                float l, b;
                cin >> l >> b;
                cout << endl << "Area of the rectangle is " << area(l, b) << endl;
                break;
            case 3:
                cout << endl << "Enter the 3 sides of the triangle" << endl;
                float x, y, z;
                cin >> x >> y >> z;
                cout << endl << "Area of the rectangle is " << area(x, y, z) << endl;
                break;
            case 4:
                exit(0);
            default:
                cout << endl << "Invalid choice" << endl;
        }
    }
}

float area(float r)
{
    return (22.0 / 7) * r * r;
}

float area(float l, float b)
{
    return l * b;
}

float area(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
