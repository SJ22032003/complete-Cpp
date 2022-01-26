#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	/* Type Casting  */


	// Implicit --> by compile
	// cout<< 'a' + 3<< endl; // + converting 'a' into ASCII value 100 and adding 3
	// cout<< 'a' + 'b'<<endl;

	// char c = 'a'+1; // here we are converting int 1 into char.
	// cout<< c <<endl;

	// char ch = 'A' + 'A';
	// cout<< ch << endl;

	// // int into float
	// cout<<  5 + 95.895 << endl;

	// // float into int
	// int in = 5.45 + 4;
	// cout<< in <<endl;


	// Explicit --> by user
	char cha = 'A';
	int val = (int)cha;
	cout<< val << endl;

	bool b = false;
	int x  = (int)b;
	cout<< x << endl;


	return 0;
}