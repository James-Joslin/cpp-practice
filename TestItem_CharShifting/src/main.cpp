#include <iostream>
#include <vector>
#include <string>

#include "ExternalFunctions.h"

using namespace std;

int main()
{
	string input_string;
	int shift_amount;

	cout << "Enter string to be encrypted: ";
	getline(cin, input_string);
	cout << "Enter character shift integer: ";
	cin >> shift_amount;

	vector<char> encrypted_vec = CaeserCipher(input_string, shift_amount);
	string encrypted_string(encrypted_vec.begin(), encrypted_vec.end());

	cout << encrypted_string << endl;
	return 0;
}