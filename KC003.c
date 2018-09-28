//
// 28.09.18.
//

#include <stdio.h>

int main() {
    double a, b, c;
    while (scanf("%lf%lf%lf", &a, &b, &c) != EOF) {
        if (a < b + c && b < a + c && c < a + b) { putchar('1'); }
        else { putchar('0'); }
        putchar('\n');
    }
    return 0;
}


