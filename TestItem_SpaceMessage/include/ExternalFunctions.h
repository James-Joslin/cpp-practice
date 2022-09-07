#include <iostream>
#include <string>
#include <vector>
#include <tuple>

using namespace std;

tuple<string,int> sepCharTypes(string inputString)
{
    string chars;
    string nums;

    vector<char> vec(inputString.begin(), inputString.end());
    for (auto &&i : vec)
    {
        if (isdigit(i))
        {
            nums.push_back(i);
        }
        else
        {
            chars.push_back(i);
        }
        
    }
    if (nums.empty())
    {
        nums = "1";
    }
    return tuple(chars, stoi(nums));
}

vector<string> tokenizer(string inputString)
{
    vector<char> charVec(inputString.begin(), inputString.end());
    string tempString;
    vector<string> tokens{};

    for (char i : charVec)
    {
        if (int(i) == 91 || int(i) == 93)
        {
            tokens.push_back(tempString);
            tempString.clear();
        }
        else
        {
            tempString.push_back(i);
        }
        
    }
    // Loop end - push final string
    tokens.push_back(tempString);
    return tokens;
}

string spaceMessage(string inputString)
{
    vector<string> tokens = tokenizer(inputString);    

    string finalString;
    for (string token : tokens)
    {
        auto [chars, count] = sepCharTypes(token);
        
        for (int i = 0; i < count; i++)
        {
            finalString.append(chars);
        }
        
    }

    return finalString;
}