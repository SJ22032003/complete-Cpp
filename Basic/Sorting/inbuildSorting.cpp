#include <iostream>
#include <algorithm>
using namespace std;


int main(int argc, char const *argv[])
{

	int a[] = {2,4,6,1,8,3,9,23};

	int n = sizeof(a)/sizeof(a[0]);
	
	sort(a,a+n);

	for(auto x : a){
		cout << x << " ";
	}
	
	return 0;
}