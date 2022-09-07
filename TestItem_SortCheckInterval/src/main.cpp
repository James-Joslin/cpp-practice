#include <iostream>
#include "ExternalFunctions.h"

using namespace std;

int main()
{
	int size;
	cout << "Enter size of the array" << endl;
	cin >> size;
	int InitialArray[size];

    cout << "Enter " << size << " Integers for your array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> InitialArray[i];
    };
	// Sorted with counting sort
	auto [first, last] = SortMinMax(InitialArray, size);

	cout << "Min and Max:\n" << first << " " << last << endl;
	int interval = last - first;
	cout << "Interval\n" << interval << endl;

	bool exists = InArray(InitialArray, size, interval);
	if (exists)
	{
		cout << "Interval present in array" << endl;
	}
	else
	{
		cout << "Interval is not present in array" << endl;
	};
	return 0;
}