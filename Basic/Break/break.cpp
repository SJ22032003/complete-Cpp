#include <bits/stdc++.h>
using namespace std;

#define ed endl;
int main(int argc, char const *argv[])
{

	int n;cin >>n;
	for (int i = 1; i <= n; ++i)
	{
		if(i==14){
			cout<<"found 10, so break"<<ed;
			break; // stops the loop
		}else{
			cout << "not found"<<ed;
		}
	}

	
	return 0;
}