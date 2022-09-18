/*Oscar Hoegler, September 8th 2022, Laboratory 3.5
 *OscarLab3.5, Calculate cost */

#include <iostream>
#include <string>

using namespace std;

int main(void) {

	double bookCOST, bookQUANTITY;

	cout << "How many books, and for how much?"; cin >> bookQUANTITY >> bookCOST;
	cout << "Your total cost is: $" << (bookQUANTITY * 2.5) + (bookCOST += 0.075 * bookCOST);

	return 0;
}