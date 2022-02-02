#include <iostream>
using namespace std;

int fact(int a){
	if(a==1 || a==0){
		return 1;
	}
	return a*fact(a-1);
}

int main(int argc, char const *argv[])
{

	int n,r; cin>>n>>r;
	cout<< fact(n)/(fact(n-r)*fact(r));

	
	return 0;
}