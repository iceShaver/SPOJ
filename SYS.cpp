//SPOJ: SYS
//TIME: 2017-09-26
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

string binToX(long long number, short outputBase)
{
	string result;
	string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while(number!=0)
	{
		result += digits[number % outputBase];
		number /= outputBase;
	}
	return string(result.rbegin(), result.rend());
}

int main(int argc, char* argv[])
{
	short testsNumber, n;
	cin >> testsNumber;
	while (testsNumber--)
	{
		cin >> n;
		cout << binToX(n, 16) << " " << binToX(n, 11) << endl;
	}
	return 0;
}
