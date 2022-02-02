#include <iostream>
using namespace std;

void rev(char a[], int n){
	int s=0 , e=n-1;
	while(s<e){
		swap(a[s],a[e]);
		s++;e--;
	}
	cout << a << endl;
}

int main(int argc, char const *argv[])
{
	int n; cin>>n;
	char a[n]; cin>>a;
		
	rev(a , n);
	return 0;
}