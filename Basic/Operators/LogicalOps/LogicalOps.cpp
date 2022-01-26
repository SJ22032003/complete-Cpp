#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	/* Logical Operator */

	// && --> and . Both values should be true
	int a = 10 , b = 10 , c = 14 , d = 4;
	if(a==b && c<d){
		cout << "True" << endl;
	}else{
		cout << "False" << endl;
	}


	// || --> or . Any value from both should be true
	if(a == b || c<d){
		cout << "True" << endl;
	}else{
		cout << "False" << endl;
	}


	// !(condition)  // converts false into true and vise-versa

	return 0;
}