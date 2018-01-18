#include <stdio.h>
int main()
{
    int a = 10, b = 20, c = 32, x, y;
    x = ++a;
    y = a++;
    printf("x = %d y = %d a = %d %x\n", x, y, a, a);
    x = b++ + ++c;
    printf("x = %d a = %d b = %d c = %d\n", x, a, b, c);

    int i = -1;
    unsigned int i2 = 3u - 4u;
    i = 4294967295;
    i = i2;

    char asciia = 'a';
    printf ("ASCII code of \"a\" is %d\n", 'a');

    unsigned int overflow = -1;

    // 1 // int
    // 1. // float
    // 1f // float
    // 1u // unsigned int
    return 0;
}