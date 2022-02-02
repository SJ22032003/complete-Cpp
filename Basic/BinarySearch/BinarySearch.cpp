#include <iostream>
using namespace std;

	// Binary search take a mid point and start searching in between array. it only works in array is sorted O(log n) Excellent;

 int binarySearch(int a[] , int s , int e , int k , int n){
 	int m;
 	for (int i = 0; s <= e; ++i)
 	{
 		m = (s/2)+(e/2);

 		if(a[m] == k){
 			return m;
 		}
 		else if(a[m] > k){
 			e = m-1;
 		}
 		else if(a[m]< k){
 			s = m+1;
 		}
 	}
 	return -1;
 }

int main(int argc, char const *argv[])
{

	int a[] = {5,12,16,24,27,31,33,39,44,55,69,76,100};
	int n  = sizeof(a)/sizeof(a[0]); 
	int start = 0 , end = n-1;

	int key; cin >> key;

	int pos = binarySearch(a,start , end , key , n);

	printf(pos==-1?"Key not found":"Key found at Index %d ",pos);

	
	return 0;
}