#include <stdio.h>

#define MESSAGE "This is a message"

int mult(int a, int b) {
    return a*b;
}

int sum(int min, int max) {
    int res = 0;
    for (min; min < max; min++) {
        res += min;
    }
    return res;
}

int main(int argc, char *argv[]) {
    if (argc > 2) {
        printf("Has a cmd arg\n");
    }

    printf("%d\n", mult(2,3));

    printf("%d\n", sum(1,10));

    printf("%s\n", MESSAGE);
    return 0;
}
