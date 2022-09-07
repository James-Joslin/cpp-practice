#include <iostream>
#include <array>
#include <algorithm>
#include <string>
#include <vector>
#include <tuple>

using namespace std;

char lowerAscii(char in)
{
    if (in <= 'Z' && in >= 'A')
    {
        in = in - ('Z' - 'z');
        return in;
    }
    return in;
}

vector<int> countDigits(int arr[], string searchItem, int length)
{
    vector<int> counts;
    int count;
    for (int i = 0; i < length; i++)
    {
        count = 0;
        string temp = to_string(arr[i]);
        int stringLength = temp.length();
        for (int j = 0; j < stringLength; j++)
        {
            int digit = temp[j] - '0';
            // cout << digit << " ";
            if (digit % 2 && searchItem == "odd")
            {
                ++count;
            }
            if (digit % 2 == 0 && searchItem == "even")
            {
                ++count;
            }
            
        }
        counts.push_back(count);
    }
    return counts;
}