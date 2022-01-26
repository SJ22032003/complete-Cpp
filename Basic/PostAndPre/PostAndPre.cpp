#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	
	int a = 1;
	a++;						// post increment
	cout << a << endl;

	int b = 1;
	++b;						// pre increment
	cout << b << endl;

	cout << "-------------------------" << endl;

	int x,y;
	x = 1;
	y = x++; // first assign the original value than increment it so y = 1 and later x = 2;
	cout << x << endl;
	cout << y << endl;

	// similarly

	cout << "-------------------------" << endl;

	int p,q;
	p = 1;
	q = ++p;
	cout << p << endl;
	cout << q << endl;

	return 0;
}