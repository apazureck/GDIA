#include <stdio.h>

int main() {
    int a = 5u;
    unsigned int b = 5;
    long long int c;
    printf("%d\n\n", sizeof(c));

    int d = 25;
    printf("%d, %x, %o", d, d, d);

    fflush(stdin);
    getchar();
}