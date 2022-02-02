#include <bits/stdc++.h>
using namespace std;

#define ed endl;
int main(int argc, char const *argv[])
{

	int n;cin>>n;
	for (int i = 1; i <= n; ++i)
	{
		if(i%3==0){
			continue;
		}
		cout << i <<" ";
	}

	
	return 0;
}