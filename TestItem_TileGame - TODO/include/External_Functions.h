#include <iostream>
#include <vector>

using namespace std;

void tileSum(vector<int> input_vector)
{
    vector<pair<int,int>> tileVector;
    int count = 0;
    for (int i : input_vector)
    {
        if (count == 0)
        {
            tileVector.push_back(make_pair(i,1));
        }
        else
        {
            if (i == tileVector[count-1].first && tileVector[count-1].second < 2)
            {
                cout << tileVector[count-1].first << " ";
                tileVector[count-1].first += i;
                cout << tileVector[count-1].first << endl;
                tileVector[count-1].second += 1;
            }
            else
            {
                cout << tileVector[count-1].first << endl;
                tileVector.push_back(make_pair(i,1));
            }
        };
        ++count;
    };
    for (auto &&i : tileVector)
    {
        cout << "{" << i.first << "," << i.second << "}" << endl;
    };
}