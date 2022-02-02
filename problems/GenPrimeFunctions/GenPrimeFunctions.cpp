#include <iostream>
using namespace std;

//functions

	bool isPrime(int x){
		for (int i = 2; i <= x/2; ++i)
		{
			if(x%i==0){
				return false;
			}
		}
		return true;
	}

	void genPrime(int a){
		for (int i = 2; i <= a; ++i)
		{
			if(isPrime(i)){
				cout << i << endl;
			}
		}
	}

int main(int argc, char const *argv[])
{

	int n; cin >>n;
	genPrime(n);

	
	return 0;
}