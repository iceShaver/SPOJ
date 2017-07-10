#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
	int tests_number;
	cin >> tests_number;
	for (int i = 0; i < tests_number; ++i)
	{
		int numbers_number;
		cin >> numbers_number;
		int*arr = new int[numbers_number];
		for (int i = 0; i < numbers_number; ++i)
		{
			cin >> arr[i];
		}
		for (int i = 1; i < numbers_number; ++i)
		{
			cout << arr[i] << " ";
		}
		cout << arr[0] << endl;
		delete[] arr;
	}
	return 0;
}
