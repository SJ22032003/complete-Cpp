#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{

	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> arr[i];
	}
	int large = arr[0];
	int small = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		if(arr[i] > large){
			large = arr[i];
		}
		if(arr[i] < small){
			small = arr[i];
		}
	}
	cout << large << " " << small << endl;

	
	return 0;
}