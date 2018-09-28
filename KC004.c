//
// 28.09.18.
//
#include <stdio.h>

int main() {
    int wanted_number;
    while (scanf("%d", &wanted_number) != EOF) {
        int sequence_length;
        scanf("%d", &sequence_length);
        int number;
        int counter = 0;
        while (sequence_length-- && scanf("%d", &number) != EOF) {
            if (number == wanted_number) { ++counter; }
        }
        printf("%d\n", counter);
    }
    return 0;
}
