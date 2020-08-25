/* Calculate grade */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the marks you obtained: ";
    cin >> n;
    cout << endl;

    char G;
    if (n <= 100 && n >= 90)
        G = 'O';
    else if (n <= 89 && n >= 80)
        G = 'E';
    else if (n <= 79 && n >= 70)
        G = 'A';
    else if (n <= 69 && n >= 60)
        G = 'B';
    else if (n <= 59 && n >= 50)
        G = 'B';
    else if (n <= 49 && n >= 40)
        G = 'D';
    else if (n < 40)
        G = 'F';
    cout << "You got " << G << " grade" << endl;

    return 0;
}