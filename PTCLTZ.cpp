#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
	unsigned setsNumber, number, counter;
	cin >> setsNumber;
	for (int i = 0; i < setsNumber; ++i)
	{
		counter = 0;
		cin >> number;
		while (number != 1) 
		{
			if (number % 2 == 1)
				number = (3 * number) + 1;
			else
				number = number / 2;
			counter++;
		}
		cout << counter << endl;
	}
	return 0;
}
