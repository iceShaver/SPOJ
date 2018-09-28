// 2018-09-28
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int age;
        int segments;
        scanf("%d", &segments);
        age = segments - 1;
        while(segments--){
            int legs;
            scanf("%d", &legs);
            age += legs;
        }
        printf("%d ", age);
    }
    return 0;
}

