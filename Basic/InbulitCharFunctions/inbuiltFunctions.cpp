#include <iostream>
#include <cstring>
using namespace std;


int main(int argc, char const *argv[])
{

	char a[100]; cin >> a;
	char b[50] = "hello"; 

	// strlen(x)-----------------------------------------------------------------------------
	cout << "Length : " << strlen(a) << endl;

	//strcmp --> compared string will have 0 or non-0 value. 0 = equal of same data type-----
	if(strcmp(a,b) == 0){
		cout << "equal" << endl;
	}else{
		cout << "not equal" << endl;
	}

	// strcpy(x,y) --> copies all y into x --------------------------------------------------
	char st1[20] = "hello";
	char st2[strlen(st1)];
	strcpy(st2 , st1);
	cout << st2 << endl ;

	//strncpy(x,y,n) --> copies first n characters to the destination -----------------------
	char str1[] = "abcdefg";
	char str2[] = "shobhit";

	// strncpy(str2 , str1 , 5);
	// cout << str2 << "\n" ;

	//strcat(x,y) --> add y to the end of x

	strcat(str1,str2);
	cout << str1 << endl;
	cout << strlen(str1) << endl;

	//sc_str() --> converts string into char ------------------------------------------------
	// string str = "level";
	// char arr[str.length()+1];
	// strcpy(arr , str.c_str());




	return 0;
}