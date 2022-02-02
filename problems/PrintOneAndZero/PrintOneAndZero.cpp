#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n; cin >> n;
	int i = 1;
	while(i<=n){
		if(i%2==0){
			int j=0;
			while(j<i){
				if(j%2==0){
					printf("0 ");
				}else{
					printf("1 ");
				}
				j++;
			}
		}
		if(i%2!=0){
			int j=0;
			while(j<i){
				if(j%2==0){
					printf("1 ");
				}else{
					printf("0 ");
				}
				j++;
			}
		}
		printf("\n");
		i++;
	}
	return 0;
}