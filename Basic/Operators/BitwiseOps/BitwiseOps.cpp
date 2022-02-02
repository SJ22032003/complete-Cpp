#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	/* Bitwise Operators */

	// & --> binary bitwise conversion
	/*
		0 & 0 = 0
		1 & 0 = 0
		0 & 1 = 0
		1 & 1 = 1
	*/

	cout << (5&3) << endl;

	// | --> binary bitwise conversion
	/*
		0 | 0 = 0
		0 | 1 = 1
		1 | 0 = 1
		1 | 1 = 1
	*/

	cout << (3|7) << endl;

	// ~ (Negation) --> binary bitwise conversion , it will flip all bits (-ve)
	/*
		1 --> 0
		0 --> 1
	*/

	cout << (~5) << endl;

	// ^ XOR --> binary conversion --> same bit = 0 , different bits = 1 
	/*
		0 ^ 0 = 0            a ^ 0 = a
		1 ^ 0 = 1            a ^ a = 0
		0 ^ 1 = 1			 a ^ b ^ a = b  (because a^a = 0)
		1 ^ 1 = 0
	*/
cout << "-------------------------"<<endl;
	cout << (5^0) << endl;
	cout << (2^3^2) << endl;
	cout << (2^5^2^3) << endl;
	cout << (17^2) << endl;

	// << left shift --> shifts bits towards left and add 0 in the end and removes first bit
	/*  
		x << y => x*2 power(y);
	*/

	cout << (3<<4) << " == " << ((3*pow(2,4))) << endl;

	// >> rigth shift --> shifts bits towords rigth and last bit will be removed and adds zero first
	/*)
		x >> y => x/2 power(y)
	*/ 

	cout << (3>>4) << " == " << (3/pow(2,4)) << endl;

	return 0;
}