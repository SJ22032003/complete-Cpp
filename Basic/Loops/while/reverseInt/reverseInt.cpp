// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	int n,rev; cin >> n;
// 	while(n != 0){
// 		int last_digit = n%10;
// 		rev = rev*10 + last_digit;
// 		n/=10;
// 	}
// 	cout << rev << endl;
// 	return 0;
// }
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int x,y,z;
		cin >> x >> y >> z;
		cout << x*z - x*y << endl;
	}
	return 0;
}