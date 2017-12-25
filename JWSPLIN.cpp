// Date: 2017-12-25
// SPOJ: JWSPLIN
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	unsigned tests_number;
	int x1, y1, x2, y2, x3, y3;
	float a, b;
	cin >> tests_number;
	while(tests_number--) {
		scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
		if(fabs(x1-x2) < 0.000001) {
			cout << "TAK" << endl;
			continue;
		}
		a = (y1 - y2) / (x1 - x2);
		b = y1 - a * x1;
		if (fabs(a*x3 + b - y3) < 0.000001)
			cout << "TAK" << endl;
		else
			cout << "NIE" << endl;

	}
	return 0;
}