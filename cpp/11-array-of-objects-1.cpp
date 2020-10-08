/*
Define a class student to represent a student's roll, name,
total marks. Display the name of the student who got the highest
marks. Also display the student's marks and roll.
*/

#include <iostream>
using namespace std;

#define STCOUNT 2

class student {
    private:
        int roll;
        int marks;
        string name;
    public:
        void input();
        void output();
        int getmarks();
};

inline void student::input()
{
    cout << "The student's name:" << endl;
    getline(cin >> ws, name);
    cout << "The student's roll number:" << endl;
    cin >> roll;
    cout << "The student's total marks:" << endl;
    cin >> marks;
}

inline void student::output()
{
    cout << "Highest marks is obtained by " << name << ", roll: " << roll << endl;
    cout << name << " got " << marks << endl;
}

inline int student::getmarks()
{
    return marks;
}

int main()
{
    student st[STCOUNT];

    for (int i = 0; i < STCOUNT; i++) {
        cout << "Enter student #" << i + 1 <<"'s details:" << endl;
        st[i].input();
    }

    int j = 0;
    for (int i = 1, max = st[0].getmarks(); i < STCOUNT; i++) {
        if (st[i].getmarks() > max) {
            max = st[i].getmarks();
            j = i;
        }
    }

    st[j].output();

    return 0;
}