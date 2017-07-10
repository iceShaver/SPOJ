#include <iostream>
using namespace std;

int main()
{
	unsigned short n;
	int  l;
	cin >> n;

	while (n--) {
		cin >> l;
		if (l <= 1) cout << "0 1";
		else if (l == 2) cout << "0 2";
		else if (l == 3) cout << "0 6";
		else if (l == 4) cout << "2 4";
		else if (l == 5 || l == 6 || l == 8) cout << "2 0";
		else if (l == 7) cout << "4 0";
		else if (l == 9) cout << "8 0";
		else cout << "0 0";




		cout << endl;
	}
	
	
    return 0;
}