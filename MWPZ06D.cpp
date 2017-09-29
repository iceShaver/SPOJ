//SPOJ: MWPZ06D - Imieniny
//TIME: 2017-09-29
#include <cstdio>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	short testsNumber, n;
	cin >> testsNumber;
	while (testsNumber--)
	{
		int persons, sweets;
		cin >> persons >> sweets;
		persons--;
		if (!persons) cout << "TAK" << endl;
		else
			cout << ((sweets%persons == 0) ? "NIE" : "TAK") << endl;

	}
	return 0;
}
