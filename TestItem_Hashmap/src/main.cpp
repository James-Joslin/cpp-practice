#include <iostream>
#include <string>
#include <map>
#include <ExternalFunctions.h>

using namespace std;

int main()
{
	string input_string;
	cout << "Input String:" << endl;
	cin >> input_string;

	map<char, int> CountMap = CountChar(input_string);
	for (auto &&i : CountMap)
	{
		cout << "{" << i.first << "," << i.second << "}" << endl;	
	}

	return 0;
}