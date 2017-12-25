// Date: 2017-12-25
// SPOJ: JROWLIN
#include <cstdio>
#include <cmath>
#define PRECISION 0.000001
int main() {
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	if (fabs(a) < PRECISION) {
		if (fabs(b-c) < PRECISION)
			puts("NWR");
		else
			puts("BR");
		return 0;
	}
	printf("%.2f", (c - b) / a);
	return 0;
}