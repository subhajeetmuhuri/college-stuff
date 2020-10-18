/*
Define a class Complex containing real and imaginary part.
Overload the operator +, - and * for this class.
*/

#include <iostream>
using namespace std;

class complex {
    private:
        int real, imaginary;
    public:
        void input_number(int);
        void display_number();
        complex operator + (complex);
        complex operator - (complex);
        complex operator * (complex);
};

inline void complex::input_number(int n)
{
    cout << endl << "Enter the real part of number #" << n << endl;
    cin >> real;
    cout << endl << "Enter the imaginary part of number #" << n << endl;
    cin >> imaginary;
}

inline void complex::display_number()
{
    if (real) {
        if (!imaginary)
            cout << real;
        else if (imaginary > 0)
            cout << real << " + " << imaginary << "i";
        else
            cout << real << " - " << abs(imaginary) << "i";
    } else {
        if (imaginary)
            cout << imaginary << "i";
        else
            cout << real;
    }
}

inline complex complex::operator + (complex number)
{
    complex n;
    n.real = real + number.real;
    n.imaginary = imaginary + number.imaginary;
    return n;
}

inline complex complex::operator - (complex number)
{
    complex n;
    n.real = real - number.real;
    n.imaginary = imaginary - number.imaginary;
    return n;
}

inline complex complex::operator * (complex number)
{
    complex n;
    n.real = (real * number.real) - (imaginary * number.imaginary);
    n.imaginary = (real * number.imaginary) + (imaginary * number.real);
    return n;
}

int main()
{
    cout << "Enter two complex numbers" << endl;
    complex number1, number2;
    number1.input_number(1);
    number2.input_number(2);

    cout << endl << "Your number #1 is ";
    number1.display_number();
    cout << endl;
    cout << endl << "Your number #2 is ";
    number2.display_number();
    cout << endl;

    cout << "MENU" << endl;
    cout << "1. Add the two entered complex number" << endl;
    cout << "2. Subtract the 2nd entered complex number from the 1st one" << endl;
    cout << "3. Get the product of the two entered complex numbers" << endl;

    int choice;
    cout << endl << "Enter your choice" << endl;
    cin >> choice;

    complex number3, number4, number5;
    switch (choice) {
        case 1:
            number3 = number1 + number2;
            cout << endl;
            cout << "("; number1.display_number(); cout << ")";
            cout << " + ";
            cout << "("; number2.display_number(); cout << ")";
            cout << " = "; number3.display_number(); cout << endl;
            break;

        case 2:
            number4 = number1 - number2;
            cout << endl;
            cout << "("; number1.display_number(); cout << ")";
            cout << " - ";
            cout << "("; number2.display_number(); cout << ")";
            cout << " = "; number4.display_number(); cout << endl;
            break;

        case 3:
            number5 = number1 * number2;
            cout << endl;
            cout << "("; number1.display_number(); cout << ")";
            cout << " * ";
            cout << "("; number2.display_number(); cout << ")";
            cout << " = "; number5.display_number(); cout << endl;
            break;
        
        default:
            cout << "Invalid choice" << endl;
    }
    return 0;
}
