#include <iostream>
using namespace std;

//functions
	
	void printHello(){
		cout << "hello" << endl;
	}

	int add(int x , int y){
		return x+y;
	}

int main(int argc, char const *argv[])
{

	
	printHello();

	int a,b;cin>>a>>b;
	int c = add(a,b);
	cout<<c;

	return 0;
}