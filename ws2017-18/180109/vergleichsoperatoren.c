#include <stdio.h>

int main()
{
    int a = 1, b = 2;

    int kleinergleich = a <= b;
    int groessergleich = a >= b;
    int ungleich = a != b;

    fflush(stdin);
    getchar();
    return 0;
}