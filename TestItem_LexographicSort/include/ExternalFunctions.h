#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<char>LexoSort(string input_string, bool ascending)
{
    int n, j, i;
    char key;
    vector<char> vec(input_string.begin(), input_string.end());
    n = vec.size();

    if (ascending)
    {
        for (i = 1; i < n; i++)
        {
            key = vec[i];
            j = i - 1;
            while (j >= 0 && vec[j] > key)
            {
                vec[j + 1] = vec[j];
                --j;
            }
            vec[j + 1] = key;
        };
    }
    else
    {
        for (i = n - 1; i >= 0; i--)
        {
            key = vec[i];
            j = i + 1;
            while (j > 0 && j < n && vec[j] > key)
            {
                vec[j - 1] = vec[j];
                ++j;
            }
            vec[j - 1] = key;
        }
    };
    return vec;
};