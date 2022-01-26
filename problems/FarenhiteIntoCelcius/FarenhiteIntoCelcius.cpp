#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int f; cin>>f;
	// int c = ((float)5/9)*(f-32); --> typecast it
	int c = (5.0/9)*(f-32);
	cout<<c;
	return 0;
}