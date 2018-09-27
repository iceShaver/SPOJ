//  2018-09-27
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	if (n == 0) { puts("0\n"); return 0; }
	if (n < 3) { puts("NIE\n"); return 0; }
	for (int i = 0; i <= n; ++i) { if (i % 2) { printf("%d ", i); } }
	for (int i = 0; i <= n; ++i) { if (!(i % 2)) { printf("%d ", i); } }
	return 0;
}
