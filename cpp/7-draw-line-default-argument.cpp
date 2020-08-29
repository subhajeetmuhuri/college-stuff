/* In this program, we have to draw a line of any length.
   It may contain any character. By default it should be of
   80 character long. We have to use default argument feature
   of C++ here.
*/

#include <iostream>
using namespace std;
void line(int, int length = 80, char ch = '-');
int main()
{
    int n;
    cout << "How many lines you want to print?" << endl;
    cin >> n;

    char length_choice;
    cout << "Do you want to change the length of each line (default is 80 char long) [y/n]?" << endl;
    cin >> length_choice;
    int length;
    if (length_choice == 'y') {
        cout << "Enter the length of each line:" << endl;
        cin >> length;
    }

    char char_choice;
    cout << "Do you want to change the character used for each line (default is a hyphen) [y/n]?" << endl;
    cin >> char_choice;
    char ch;
    if (char_choice == 'y') {
        cout << "Enter the character used in each line:" << endl;
        cin >> ch;
    }

    if (length_choice == 'y') {
        if (char_choice == 'y')
            line(n, length, ch);
        else if (char_choice == 'n')
            line(n, length);
    } else if (length_choice == 'n') {
        if (char_choice == 'y')
            line(n, 80, ch);
        else if (char_choice == 'n')
            line(n);
    }

    return 0;
}

void line(int n, int length, char ch)
{
    for (int count = 1; count <= n; count++) {
        for (int count = 1; count <= length; count++)
            cout << ch;
        cout << endl;
    }
}
