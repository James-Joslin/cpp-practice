#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

map<char, int> CountChar(string input_string)
{
    // Create hashmap, with the key being a char
    // and the value being an integer
    map<char, int> freq;
    // Create a hashmap iterator
    map<char, int>::iterator iter;
    // Vectorise string into char vector
    vector<char> vec(input_string.begin(), input_string.end());
    for (const char &c : vec)
    {
        iter = freq.find(c);
        if (iter != freq.end())
        {
            iter -> second++;
        }
        else
        {
            freq.insert(make_pair(c,1));
        }
    };
    return freq;
}