#include <iostream>
using namespace std;

int sum = 0;

//functions
	void printArr(int a[] , int n){  // Arrays are passed by reference so changing there values in functions changes real values.
		for (int i = 0; i < n; ++i)
		{
			cout << a[i] << " ";
			::sum+=a[i];
		}
	}


int main(int argc, char const *argv[])
{

	int n;cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>a[i];
	}

	printArr(a,n);
	cout <<"\n"<< ::sum << endl;
	
	return 0;
}