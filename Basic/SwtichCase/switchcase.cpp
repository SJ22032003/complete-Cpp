#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a; cin >> a;
	switch (a){
		case 1 :
			cout << "1";
			break;

		case 2 :
			cout << "2";
			break;

		default :
			cout << a;
			break;
	}
	return 0;
}