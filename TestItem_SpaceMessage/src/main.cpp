#include <iostream>
#include <string>
#include "ExternalFunctions.h"

using namespace std;

int main()
{
	cout << "Enter string: ";
	string inputString;
	cin >> inputString;
	cout << endl;

	string message = spaceMessage(inputString);
	
	cout << message << endl;

	return 0;
}