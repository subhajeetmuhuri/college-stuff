/* Check whether a no is +ve, -ve or zero */

#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Enter any number:" << endl;
	cin >> a;
	if (a  > 0)
		cout << "Entered number is a +ve number" << endl;
	else if (a < 0)
		cout << "Entered number is a -ve number" << endl;
	else
		cout << "Entered number is zero" << endl;
	return 0;
}