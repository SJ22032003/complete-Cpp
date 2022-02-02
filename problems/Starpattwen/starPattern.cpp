#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;cin>>n;
	int i = 0;
	while(i < n){
		int j=0;
		while(j<=i){
			cout << "*";
			j++;
		}
		cout << endl;
		i++;
	}
	return 0;
}