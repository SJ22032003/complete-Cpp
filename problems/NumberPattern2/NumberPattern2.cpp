#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;cin>>n;
	int i=1;
	while(i<=n){
		int count = 1;
		while(count <= n-i){
			printf(" ");
			count++;
		}
		int j=i;
		while(j<=2*i-1){
			printf("%d",j);
			j++;
		}
		int k = 2*i-2;
		while(k>=i){
			printf("%d",k);
			k--;
		}
		printf("\n");
		i++;
	}
	return 0;
}