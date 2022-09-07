#include <iostream>
#include "Quadratics.h"

using namespace std;

int main()
{
	float a, b, c;
	cout << "Quadratic formula: ax^2 + bx + c" << endl;
	cout << "Enter coefficients a, b and c" << endl;

	cin >> a >> b >> c;
	auto [complex, explanation, value1, value2] = quadratic(a = a, b = b, c = c);
	
	cout << explanation << endl;
	if (complex)
	{
		cout << value1 << " + " << value2 << "i" << endl;
		cout << value1 << " - " << value2 << "i" << endl;
	}
	else
	{	
		if (value1 == value2)
		{
			cout << value1 << endl;
		}
		else
		{
			cout << value1 << "\n" << value2 << endl;
		}
	}
	return 0;
};