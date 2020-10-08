/*
Define a class Time containing hour, min and sec. Include
default constructor, parameterized constructors, and
destructor into this class.
*/

#include <iostream>
using namespace std;

class Time {
    private:
        int hr, min, sec;
        void convert();
    public:
        Time();
        Time(int);
        Time(int, int);
        Time(int, int, int);
        void inputdata();
        void display();
        ~Time(){};
};

inline Time::Time()
{
    hr = min = sec = 0;
}

inline Time::Time(int x)
{
    hr = x;
    min = sec = 0;
}

inline Time::Time(int x, int y)
{
    hr = x;
    min = y;
    sec = 0;
}

inline Time::Time(int x, int y, int z)
{
    hr = x;
    min = y;
    sec = z;
}

inline void Time::convert()
{
    int total_sec = 0;
    if (sec)
        total_sec = total_sec + sec;
    if (min)
        total_sec = total_sec + (min * 60);
    if (hr)
        total_sec = total_sec + (hr * 60 * 60);

    float n = total_sec / 3600.0;
    hr = n;
    float m = (n - hr) * 60;
    min = m;
    sec = (m - min) * 60;
}

inline void Time::display()
{
    convert();
    cout << endl << hr << " hr " << min << " min " << sec << " sec" << endl << endl;
}

int main()
{
    int hr, min, sec;
    cout << endl << "MENU" << endl;
    cout << "1. Default values" << endl;
    cout << "2. Enter your measurement in hr only" << endl;
    cout << "3. Enter your measurement in hr and min" << endl;
    cout << "4. Enter your measurement in both hr, min and sec" << endl;

    int choice;
    cout << endl << "Enter your choice" << endl;
    cin >> choice;
    if (choice == 1) {
        Time t1;
        t1.display();
    
    } else if (choice == 2) {
        cout << endl << "Enter your measurement in hr" << endl;
        cin >> hr;
        Time t2(hr);
        t2.display();

    } else if (choice == 3) {
        cout << endl << "Enter your measurement in hr" << endl;
        cin >> hr;
        cout << endl << "Enter your measurement in min" << endl;
        cin >> min;
        Time t3(hr, min);
        t3.display();

    } else if (choice == 4) {
        cout << endl << "Enter your measurement in hr" << endl;
        cin >> hr;
        cout << endl << "Enter your measurement in min" << endl;
        cin >> min;
        cout << endl << "Enter your measurement in sec" << endl;
        cin >> sec;
        Time t4(hr, min, sec);
        t4.display();

    } else
        cout << endl << "Invalid choice" << endl;

    return 0;
}
