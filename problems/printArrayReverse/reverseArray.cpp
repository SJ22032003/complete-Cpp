#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int n;cin>>n;
	int a[n] ,rev[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>a[i];
		rev[n-1-i]  = a[i];
	}
	for(auto x : rev){
		cout << x << " ";
	}
	
	return 0;
}