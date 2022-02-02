#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
	int n; cin>>n;
	if(n%2==0){
		// cout << "Yes your number " << n << " is even"<<endl;
		printf("Yes your number %d is even", n);
	}else{
		cout << "Odd number";
	}
	return 0;
}