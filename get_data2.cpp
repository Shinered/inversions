#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string a = "123";
	string b = "456";
	int temp1;
	int temp2;
	stringstream ss;
	ss << a;
	ss >> temp1;
	cout << "a:" << temp1 << endl;
	ss << b;
	ss >> temp2;
	cout << "b:" << temp2 << endl;

	return 0;
}
