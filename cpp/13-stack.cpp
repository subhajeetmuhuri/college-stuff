/*
Define a class Stack to represent a stack.
Include necessary constructors, destructor,
access functions for this class.
*/

#include <iostream>
using namespace std;

#define SZ 5

class stack {
    private:
        int top;
        int arr[SZ];
    public:
        stack();
        ~stack(){};
        bool isempty();
        bool isfull();
        void push(int);
        int pop();
        void display();
};

inline stack::stack()
{
    top = -1;
}

inline bool stack::isempty()
{
    if (top == -1)
        return true;
    return false;
}

inline bool stack::isfull()
{
    if (top == SZ - 1)
        return true;
    return false;
}

inline void stack::push(int n)
{
    top++;
    arr[top] = n;
}

inline int stack::pop()
{
    return arr[top--];
}

void stack::display()
{
    for (int i = 0; i <= top; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    stack st;
    int n, choice;

    while (1) {
        cout << endl;
        cout << "---------------------" << endl;
        cout << "MENU" << endl;
        cout << "1. Push" << endl << "2. Pop" << endl << "3. Display the stack" << endl << "4. Exit" << endl;
        cout << "---------------------" << endl << endl;
        cout << "Enter your choice: " << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << endl << "Enter any number" << endl;
                cin >> n;
                if (st.isfull())
                    cout << endl << "Stack overflow" << endl;
                else
                    st.push(n);
                break;
            
            case 2:
                if (st.isempty())
                    cout << endl << "Stack underflow" << endl;
                else
                    cout << endl << "Popped element = " << st.pop() << endl;
                break;
            
            case 3:
                if (st.isempty())
                    cout << endl << "Stack is empty" << endl;
                else {
                    cout << endl << "The stack elements are as follows:" << endl;
                    st.display();
                }
                break;

            case 4:
                exit(0);

            default:
                cout << endl << "Invalid option" << endl;
        }
    }
}
