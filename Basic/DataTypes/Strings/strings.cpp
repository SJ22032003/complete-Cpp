#include <iostream>
#include <algorithm> // contains sorting
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	string str = "hello";
	// getline(cin, str);
	cout << str << " ";


//Append
	string s1 = "fam", s2 = "ily";
		// we can also use this
		// cout << s1 + s2 << endl;
	cout << s1.append(s2) << endl;

//Access charcter
	cout << s1[2] << endl;

//clear()
	string abc = "sdvsveddddxcsv";
	abc.clear();
	cout << abc << endl;

//compare()
	cout << s2.compare(s1) << endl; // means s2 is greater lexicographly

//empty()
	cout << (abc.empty()==1?"empty":"not empty") << endl;

//erase()
	string s = "nincompoop";
	cout << s.erase(3,3) << endl; // erase(starting index, ending index)

//find()
	cout << s.find("poop") << endl; // gives starting index of sub-string if exist

//insert()
	cout << s.insert(s.length(),"lol") << endl;	

//length() or size()
	cout << s.length() << endl;

//substr
	string st = "helloeveryone";
	cout << st.substr(2,st.length()) << endl;

//stoi(x) --> string to int
	string y = "1014";
	int x = stoi(y);
	cout << x + 2<< endl;

//to_string
	int a = 1047;
	cout << to_string(a) + " its a number" << endl;

//sort
	string check = "zxcvbmnasdfghjklpoiuytqwer";
	sort(check.begin(),check.end());
	cout << check << endl;

//reverse
	string palin = "father";
	reverse(palin.begin(),palin.end());
	cout << palin << endl;
	return 0;
}