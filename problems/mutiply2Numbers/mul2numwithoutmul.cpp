#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m,sum=0;cin>>n>>m;

	for (int i = 0; i < m; ++i)
	{
		sum += n;
	}
	cout << sum;
	return 0;
}