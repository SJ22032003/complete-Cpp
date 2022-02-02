#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int n ,temp;cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>> a[i]; 
	}
	for (int i = 0; i < n-1; ++i)
	{
		a[i] = a[i]^a[i+1];
		a[i+1] = a[i]^a[i+1];
		a[i] = a[i]^a[i+1];
	}
	for(auto x : a){
		cout << x << " ";
	}
		// swap(a,b);
	return 0;
}