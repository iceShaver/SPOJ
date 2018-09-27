// 2018-09-27
#include <stdio.h>
#include <ctype.h>

int main() {
    int input;
    while ((input = getchar()) != EOF) {
        if (input == ' ') {
            while ((input = getchar()) != EOF && input == ' ');
            putchar(toupper(input));
        } else
            putchar(input);
    }
    return 0;
}
