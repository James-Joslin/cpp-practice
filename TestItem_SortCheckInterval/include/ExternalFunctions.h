#include <iostream>
#include <tuple>

using namespace std;

tuple<int, int> SortMinMax(int input_array[], int size)
{
    // Initialise parameters
    int range = 0;
    for (int i = 0; i < size; i++)
    {
        if (input_array[i] > range)
        {
            range = input_array[i];
        }    
    } 
    ++range;
    int count_array[range];
    for (int i = 0; i < range; i++)
    {
        count_array[i] = 0;
    };
    int output_array[size];

    // Run Sorting
    for (int i = 0; i < size; i++)
    {
        ++count_array[input_array[i]];
    };
    for (int i = 0; i < range-1; i++)
    {
        count_array[i+1] = count_array[i] + count_array[i+1];
    }
    for (int i = 0; i < size; i++)
    {
        int val = input_array[i];
        int idx = count_array[val];
        count_array[val]--;
        output_array[idx-1] = val;
    } ;

    // Print output  
    cout << "Sorted Array - Using counting sort:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << output_array[i] << " ";
    };
    cout << endl;
    
    // Get first and last values
    int first = output_array[0];
    int last = output_array[size-1];
    return {first, last};
};

bool InArray(int input_array[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (input_array[i] == target)
        {
            return true;
        };
    };
    return false;
};