#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <sstream>

using namespace std;

vector<int> extractInteger(string str)
{
    // stringstream ss;
    // ss << str;

    // string temp;
    // int found;
    // while (!ss.eof())
    // {
    //     ss >> temp; // Feeds one item at a time from ss into temp - Useful for future but doesn't work here
    //     cout << temp << endl;
    // }

    vector<int> numbers;
    int multiplier;
    int count = str.length();
    for (int i = 0; i < count; i++)
    {
        if (isdigit(str[i]))
        {
            int tempInt = str[i] - '0';
            numbers.push_back(tempInt);
        }
        else if (str[i] == '+')
        {
            multiplier = 1;
        }
        else if (str[i] == '-')
        {
            multiplier = -1;
        }
    }
    numbers[1] = numbers[1] * multiplier;
    return numbers;
}

bool willHit(string eqn, int coords[])
{
    vector<int> paras = extractInteger(eqn);
    int quotient = (paras[0] * coords[0]) + paras[1];
    
    if (quotient == coords[1])
    {
        return true;
    }
    else
    {
        return false;
    }
}