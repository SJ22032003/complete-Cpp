#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{

	int a[100][100]; //  100 x 100 matrix
	int m,n; cin >>m>>n;  // rows x column

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> a[i][j];   //  row major is used --> i*c + j  & c is column
		}
	}

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << a[i][j] << " "; 
		}
		printf("\n");
	}

	
	return 0;
}