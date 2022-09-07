#include <iostream>
#include <array>
#include <algorithm>
#include <string>
#include <tuple>
#include <vector>
#include <ExternalFunctions.h>

using namespace std;

int main()
{
	int length;
	string searchItem;
	bool correct = false;

	cout << "Enter array length: ";
	cin >> length;

	int arr[length];
	cout << "Enter array items: ";
	for (int i = 0; i < length; i++)
	{
		cin >> arr[i];
	}

	while (correct != true)
	{
		cout << "Enter search term: ";
		cin >> searchItem;
		transform(searchItem.begin(), searchItem.end(), searchItem.begin(), lowerAscii);

		if (searchItem == "odd" || searchItem == "even")
		{
			correct = true;
		}
		else
		{
			cout << "Search term not recognised" << endl;
			correct = false;
		}
	}
	vector<int> counts = countDigits(arr, searchItem, length);
	for (auto &&i : counts)
	{
		cout << i << " ";
	}
	
}