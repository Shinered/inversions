#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int main(int argv, char *arg[])
{
	fstream f("1.txt");
//	vector<string> words;
	vector<long int> numbers;
	string line;
	long int temp;
	stringstream ss;
	while(getline(f,line)) // 能自动把换行符去掉
	{
		long int temp;
		stringstream ss;
		ss << line;
		ss >> temp;
		cout << temp << endl;
		numbers.push_back(temp);
	}
	cout << "number of lines:" << numbers.size() << endl;
	for(int i = 0; i < numbers.size(); i++)
	{
		cout << numbers[i] << endl;
	}
	return 0;
}
