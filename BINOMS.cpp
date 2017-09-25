//SPOJ: BINOMS
//TIME: 2017-09-25
#include <cstdio>
#define DATA_TYPE unsigned

DATA_TYPE newton(DATA_TYPE n, DATA_TYPE k)
{
	if (n - k < k) return newton(n, n - k);
	long double denominator = 1, numerator = 1;
	for (int i = n; i > n - k; --i)
		denominator *= i;
	for (int i = k; i > 1; --i)
		numerator *= i;
	return (denominator / numerator);
}

int main(int argc, char* argv[])
{
	unsigned testsNumber;
	scanf("%u", &testsNumber);
	DATA_TYPE n, k;
	while (testsNumber--)
	{
		scanf("%u%u", &n, &k);
		printf("%u\n", newton(n, k));
	}
}
