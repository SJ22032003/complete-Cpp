#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
	//DATATYPE

	int i = 10; // there is also long long int
	cout<<"Values of variable i is "<<sizeof(i)<<endl;

	short int s = 25;
	cout<<"value of variable s in byte "<<sizeof(s)<<endl;

	long long ll = 30;
	cout<<"value of variable ll in byte "<<sizeof(ll)<<endl;

	float f = 4763.21;
	cout<<"value of variable f in byte is "<<sizeof(f)<<endl;

	double d = 3.14865742;
	cout<<"value of variable d in byte is "<<sizeof(d)<<endl;

	char c = 'a';
	cout<<"value of variable c in byte is "<<sizeof(c)<<endl;

	string str = "hello";
	cout<<"value of variable \"str\" in byte is "<<sizeof(str)<<endl;

	bool flag = false; // true = 1 ; fasle = 0;
	cout<<"value of variable flag in byte is "<<sizeof(flag)<<endl;

	return 0;
}