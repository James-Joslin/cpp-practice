#include <iostream>
#include <string>
#include <array>
#include <ExternalFunctions.h>

using namespace std;

int main()
{
	string eqn;
	int x, y;

	cout << "Enter linear equation: ";
	getline(cin, eqn);

	cout << "Enter (x,y) coordinates" << endl;
	cin >> x;
	cin >> y;

	int coords[] = {x,y};

	bool hit = willHit(eqn, coords);

	if (hit)
	{
		cout << "You're getting splattered" << endl;
	}
	else
	{
		cout << "You're safe... except for the resultant fallout" << endl;
	}
	
}