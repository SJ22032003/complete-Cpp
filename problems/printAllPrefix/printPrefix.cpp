#include <iostream>
#include <cstring>
using namespace std;


void printPrefix( char a[]){
	for (int i = 0; i < strlen(a); ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			cout << a[j];
		}
		printf("\n");
	}
}

int main(int argc, char const *argv[])
{

	char a[20]; cin>>a;
	
	printPrefix(a);
	
	return 0;
}