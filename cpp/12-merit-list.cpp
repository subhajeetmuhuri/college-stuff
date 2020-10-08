/*
Define a class Student containing roll, name and total marks.
Write a C++ program to display the students' information in
descending order of total marks.
*/

#include <iostream>
using namespace std;

#define STCOUNT 5

class student {
    private:
        string name;
        int roll;
        int marks;
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
    cout << "Roll " << roll << " : ";
    cout << name << " : ";
    cout << marks << " marks" << endl;
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
    
    for (int j = 0; j < STCOUNT - 1; j++) {
        for (int i = 0; i < STCOUNT - 1; i++) {
            if (st[i].getmarks() < st[i + 1].getmarks()) {
                student temp = st[i];
                st[i] = st[i + 1];
                st[i + 1] = temp;
            }
        }
    }

    cout << "Displaying students' info in descending order of their total marks:" << endl;
    for (int i = 0; i < STCOUNT; i++)
        st[i].output();

    return 0;
}