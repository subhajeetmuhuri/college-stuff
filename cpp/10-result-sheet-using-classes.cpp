/*
Define a class student to represent a student's roll, name, marks
of 5 theory papers & 3 practical papers and grade.
*/

#include <iostream>
using namespace std;

class student {
    private:
        int roll, th[5], p[3];
        string name;
        char grade(int);
    public:
        void input();
        void output();
};

void student::input()
{
    cout << "Enter the student's name:" << endl;
    cin >> name;
    cout << "Enter the student's roll number:" << endl;
    cin >> roll;
    cout << "Enter the marks of the 5 theory papers:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Theory paper #" << i + 1 << endl;
        cin >> th[i];
    }
    cout << "Enter the marks of the 5 practical papers:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Practical paper #" << i + 1 << endl;
        cin >> p[i];
    }
}

char student::grade(int n)
{
    char G;
    if (n <= 100 && n >= 90)
        G = 'O';
    else if (n >= 80)
        G = 'E';
    else if (n >= 70)
        G = 'A';
    else if (n >= 60)
        G = 'B';
    else if (n >= 50)
        G = 'B';
    else if (n >= 40)
        G = 'D';
    else
        G = 'F';
    return G;
}

void student::output()
{
    cout << "Displaying " << name << ", Roll: " << roll << "'s grade card:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Theory paper    #" << i + 1 << ": Marks => " << th[i];
        cout << " : Grade => " << grade(th[i]) << endl;
    }
    for (int i = 0; i < 3; i++) {
        cout << "Practical paper #" << i + 1 << ": Marks => " << th[i];
        cout << " : Grade => " << grade(th[i]) << endl;
    }
}

int main()
{
    student st;
    st.input();
    st.output();
}
