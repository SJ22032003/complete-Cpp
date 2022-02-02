#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,sum = 0; cin >> n;
	// cout << n*(n+1)/2 << endl; // without loop

	// while(n >= 0){
	// 	sum +=n;
	// 	n--;
	// }
	// cout << sum << endl;

	while(n!=0){
		int last_digit = n%10;
		sum += last_digit;
		n=n/10;
	}
	cout << sum << endl;

	return 0;
}