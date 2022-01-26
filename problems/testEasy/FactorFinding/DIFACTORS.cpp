#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,count=0; cin>>n;
	for (int i = 1; i <= count; ++i)
	{
		if(n%i==0){
			++count;	
			str +=i+" ";
		}
	}
	cout<<count<<endl<<str;
	return 0;
}