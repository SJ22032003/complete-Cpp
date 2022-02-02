#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{

	char name[20];

	cin >> name;

	name[7] = 'p';
	name[11] = 'z';

	for (int i = 0; i < 20; ++i)
	{
		if(name[i] == '\0'){
			name[i] = 'z';
		}
	}

	cout<<name<<"\n";
	cout << name[5] << "\n";
	
	return 0;
}