#include <iostream>
using namespace std;


	// we are scanning the array for the element by looping from 0 index to last index [slow Algo] works in unsorted/sorted Arrays

	int linearSearch(int a[] , int n , int k){
		for (int i = 0; i < n; ++i)
		{
			if(a[i] == k){
				return i;
			}	
		}
		return -1;
	}

int main(int argc, char const *argv[])
{

	int a[] = {1,2,34,5,7,10,15,7,41,98,30};
	int key; cin >> key;
	int n = sizeof(a)/sizeof(a[0]);
	
	int pos = linearSearch(a,n,key);

	printf((pos==-1?"key not found error %d":"key found at Index %d"),pos);

	
	return 0;
}