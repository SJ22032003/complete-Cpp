#include <iostream>
using namespace std;

void checkPrime(int a){
	bool flag = false;
	for (int i = 2; i <= a/2; ++i)
	{
		if(a%i==0){
			cout << "not prime" << endl;
			flag = true;
			break;
		}
	}
	if(flag == false){
		cout << "prime" << endl;
	}
}


int main(int argc, char const *argv[])
{

	int n; cin >>n;
	checkPrime(n);

	
	return 0;
}