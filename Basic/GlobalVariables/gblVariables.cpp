#include <bits/stdc++.h>
using namespace std;

int x = 20; //global

int main(int argc, char const *argv[])
{

	int x = 10;  // local

	cout << x << endl;

	cout << ::x << endl;

	
	return 0;
}