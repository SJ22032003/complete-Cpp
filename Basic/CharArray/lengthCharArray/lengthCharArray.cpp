#include <iostream>
using namespace std;

int length(char input[]){
	int count = 0;
	for (int i = 0; input[i] != '\0'; ++i)
	{
		count++;
	}
	return count;
}


int main(int argc, char const *argv[])
{

	char a[20]; cin >> a;
	cout << a << '\n';
	cout << length(a) <<'\n'; 

	
	return 0;
}