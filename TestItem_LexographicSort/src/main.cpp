#include <iostream>
#include <vector>
#include "ExternalFunctions.h"

using namespace std;

int main()
{
	int n, i;
	string input;
	cout << "Input lexographic string" << endl;
	cin >> input;

	// Sorted with insert sort for strings
	cout << "Sort array - Using insert sort" << endl;
	vector<char> test = LexoSort(input, false);

	n = test.size();
	char* arr = test.data();
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    };
};