#include <bits/stdc++.h>
using namespace std;

#define ed endl;
int main(int argc, char const *argv[])
{
// 	int a[10];
// 	a[0] = 2;
// 	a[4] = 5;
// 	cout << a[0] << " " << a[4] <<ed;	

	int a[5]; // intialize with size, contains garbage values if not assign.
	for (int i = 0; i < 5; ++i)
	{
		cin>>a[i];
		a[i]+=2;
	}
	for(auto x : a){
		cout << x << ed;
	}

	
	return 0;
}