#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{

	int n;cin>>n;bool flag = true;
	for (int i = 2; i <= n/2; ++i)
	{
		if(n%i==0){
			cout << "Not prime";
			flag = false;
			break;
		}
	}
	if(flag == true){
		printf("Yes %d is a prime number\n", n);
	}

	
	return 0;
}