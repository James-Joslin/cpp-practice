#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<char> CaeserCipher(string input_string, int shift_amount)
{
    vector<char> vec(input_string.begin(), input_string.end());
    for (auto &&c : vec)
    {
        if (c >= 'A' && c <= 'Z')
        {
            c += shift_amount;
            if (c > 'Z')
            {
                c = 'A';
            };
        }
        else if (c >= 'a' && c <= 'z')
        {
            c += shift_amount;
            if (c > 'z')
            {
                c = 'a';
            };
        };
    };
    return vec;
}