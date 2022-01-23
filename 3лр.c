#include <stdio.h>

int main() {
    int x;
    printf("output 16: ");
    scanf("%x", &x);
    int y = x;
    printf("input 10: %d \n", y);

    int bitwise_right1 = x >> 1;
    printf("input  8 , shift 1: %o \n", bitwise_right1);

    int not_x = ~x;
    printf("output not: %o \n", not_x);

    int z;
    printf("output 8: ");
    scanf("%o", &z);

    int bitwise_or = (z | y);
    printf("Result OR: %d", bitwise_or);
    return 0;
}