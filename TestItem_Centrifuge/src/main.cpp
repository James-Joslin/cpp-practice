#include <iostream>

#include "External.h"
using namespace std;

int main()
{
	int k, n;

    cout << "Enter size of centrifuge: ";
    cin >> n;
    cout << "Enter number of vessels: ";
    cin >> k;

    if(cFuge(n, k))
    {
        cout << "Balancable" << endl;
    }
    else
    {
        cout << "Not Balancable" << endl;
    }
}