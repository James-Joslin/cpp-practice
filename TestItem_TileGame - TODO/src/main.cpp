#include <iostream>
#include <vector>

#include "External_Functions.h"

using namespace std;

int main()
{
	int size;
	cout << "Enter array length: ";
	cin >> size;

	int input_array[size];
	cout << "Enter integers into array:" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> input_array[i];
	};
	
	vector<int> input_vector(input_array, input_array + sizeof input_array / sizeof input_array[0]);
	// vector<pair<int,int>> tile_vector =
	tileSum(input_vector);
	
	// for (auto &&i : input_vector)
	// {
	// 	cout << i << " ";
	// }
	
	return 0;
}