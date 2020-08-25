/* Find the average of two inputted integers */

#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Enter the two integers you want to get average of:" << endl;
	cin >> a >> b;
	cout << "Average of the two inputted integers: " << (a + b) / 2 << endl;
    return 0;
}