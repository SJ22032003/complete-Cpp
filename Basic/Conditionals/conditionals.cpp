#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	/* Conditionals */

	int a = 15;
	int b = 67;
	int c = 15;

	if(a > b || a == b){
		cout << a <<" "<< b << endl;
	}else if(a == c){
		cout << a<<" "<<c<<endl;
	}
	else{
		cout << false << endl;
	}

	return 0;
}