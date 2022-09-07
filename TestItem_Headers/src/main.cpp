#include <iostream>
#include "testHeader.h"

using namespace std;

int main()
{
	cout << "Hello from main file" << endl;
	cout << "Enter a positive integer" << endl;
	int positive_int;
	cin >> positive_int;
	cout << factorial(positive_int) << endl;
};