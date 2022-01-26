#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	/* Reational Operator */

	int a = 10 ;
	int b = a;  // assinging values
	int c = 5;

	bool isEqual = (a == b);
	bool isless = (a < b);
	bool isgreat = (a > b);
	bool islessEqual = (a <= b);
	bool isgreatEqual = (a >= b);
	bool isnotEqual = (a != b);
	

	cout << isless << endl;
	

	return 0;
}