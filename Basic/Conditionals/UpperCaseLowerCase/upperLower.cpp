#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	char ch; cin >> ch;
	if(ch>='A' && ch<='Z'){
		cout << "UPPERCASE"<<endl;
	}else if(ch>='a' && ch<='z'){
		cout << "lowercase"<<endl;
	}else{
		cout << "Invalid";
	}
	return 0;
}