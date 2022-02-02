#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{

	int n,sum=0;cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	cout<<sum<<endl;
	
	return 0;
}