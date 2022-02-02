#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{

	char arr[10];
	string str = "hello world";

	cin.getline(arr , 300 /* , optional char breaker statement */);

	cout << arr << endl;

	cout << str[4] << endl;
	cout << str.length() << endl;
	// for(auto x : arr){
	// 	cout  << ">" << x << "<";
	// }
	
	return 0;
}