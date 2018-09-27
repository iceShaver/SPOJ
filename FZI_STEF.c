//  2018-09-27
#include <stdio.h>

int main() {
	int n, input;
	long long int
		max_income = 0,
		prev_sum = 0,
		min = 0;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &input);
		long long int sum = input + prev_sum;
		if (sum < min) { min = sum; }
		long long int tmp_income = sum - min;
		if (tmp_income > max_income) { max_income = tmp_income; }
		prev_sum = sum;
	}
	printf("%lld", max_income);
	return 0;
}
