#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int size;
	float input;
	int j = 0;
	vector <int> postive_vals, negative_vals;
	cout << "Enter Array Size:" << endl;
	cin >> size;

	cout << "Enter values:" << endl;
	while (size > j)
	{
		cin >> input;
		if (input >= 0)
		{
			postive_vals.push_back(input);
		}
		else
		{
			negative_vals.push_back(input);
		}
		++j;
	};
	cout << "Positive values:" << endl;
	for (auto &&i : postive_vals)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << "Negative values:" << endl;
	for (auto &&i : negative_vals)
	{
		cout << i << " ";
	}
	return 0;
}