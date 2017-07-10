// GLUTTON.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int setCount;
	int eaters;
	int cookiesPerBox;
	int totalCookies;
	int cookies;
	int daySec = 24 * 60 * 60;
	int boxes;
	int time;
	cin >> setCount;
	for (int i = 0; i < setCount; i++)
	{
		totalCookies = 0;

		cin >> eaters >> cookiesPerBox;

		for (int i = 0; i < eaters; i++)
		{
			cookies = 0;
			cin >> time;
			cookies = floor(daySec / time);
			totalCookies += cookies;

		}
		boxes = ceil(totalCookies / (float)cookiesPerBox);
		cout << boxes << endl;



	}

	return 0;
}

