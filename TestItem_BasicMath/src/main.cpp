#include <iostream>
#include "ExternalFunctions.h"

using namespace std;

int main()
{
	cout << "Simple Calculator" << endl;
	auto [num_1, num_2, op] = input();
	float answer = calculator(num_1 = num_1, num_2 = num_2, op = op);
	cout << num_1 << op << num_2 << "=" << answer << "\n" << endl;
	return 0;
};