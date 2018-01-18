#include <stdio.h>
int main()
{
    int a = 10, b = 20, c = 32, x, y;
    // a = a +1;
    // x = a;
    x = ++a;
    // y = a;
    // a = a +1;
    y = a++;
    printf("x = %d y = %d a = %d %x\n", x, y, a, a);
    x = b++ + ++c;
    printf("x = %d a = %d b = %d c = %d\n", x, a, b, c);
    return 0;
}