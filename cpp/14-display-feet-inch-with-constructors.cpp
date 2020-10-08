/*
Define a class Distance to represent any distance
using feet and inch. Define default Constructor,
parameterized constructor, destructor and access
functions for this class.
*/

#include <iostream>
using namespace std;

class Distance {
    private:
        int feet;
        float inch;
        float total_inch;
        void Convert();
    public:
        Distance();
        Distance(int);
        Distance(float);
        Distance(int, float);
        void InputData();
        void Display();
        ~Distance(){};
};

inline Distance::Distance()
{
    feet = inch = 0;
}

inline Distance::Distance(int x)
{
    feet = x;
    inch = 0;
}

inline Distance::Distance(float y)
{
    feet = 0;
    inch = y;
}

inline Distance::Distance(int x, float y)
{
    feet = x;
    inch = y;
}

inline void Distance::Convert()
{
    total_inch = 0;
    if (inch)
        total_inch = total_inch + inch;
    if (feet)
        total_inch = total_inch + (feet * 12);

    float n = total_inch / 12;
    feet = n;
    inch = (n - feet) * 12;
}

inline void Distance::Display()
{
    Convert();
    cout << endl << feet << " feet and " << inch << " inches" << endl << endl;
}

int main()
{
    int feet;
    float inch;
    cout << endl << "MENU" << endl;
    cout << "1. Default values" << endl;
    cout << "2. Enter your measurement in feet only" << endl;
    cout << "3. Enter your measurement in inch only" << endl;
    cout << "4. Enter your measurement in both feet and inch" << endl;

    int choice;
    cout << endl << "Enter your choice" << endl;
    cin >> choice;
    if (choice == 1) {
        Distance d1;
        d1.Display();
    
    } else if (choice == 2) {
        cout << endl << "Enter your measurement in feet" << endl;
        cin >> feet;
        Distance d2(feet);
        d2.Display();

    } else if (choice == 3) {
        cout << endl << "Enter your measurement in inch" << endl;
        cin >> inch;
        Distance d3(inch);
        d3.Display();

    } else if (choice == 4) {
        cout << endl << "Enter your measurement in feet" << endl;
        cin >> feet;
        cout << endl << "Enter your measurement in inch" << endl;
        cin >> inch;
        Distance d4(feet, inch);
        d4.Display();

    } else
        cout << endl << "Invalid choice" << endl;

    return 0;
}
