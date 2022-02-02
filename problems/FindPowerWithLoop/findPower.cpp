#include <bits/stdc++.h>

using namespace std;
#define ed endl;

int main(int argc, char const *argv[])
{

	int a,b,power=1;cin>>a>>b;

	for (int i = 0; i < b; i++)
	{
		power = a*power;
	}
	cout<<power<<"\n"<<(pow(a,b))<<ed;
	
	return 0;
}