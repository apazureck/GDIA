#include <stdio.h>

int main()
{
    printf("%d\n", 15);

    printf("%o\n", 15);

    printf("%x\n", 15);
    printf("%X\n", 15);

    double x = 15.3;
    // Komischer Wert:
    printf("%d\n", 15.3);

    // HIer ist alles gut:
    printf("%.2lf\n", 15.3);

    // Exponentialform:
    printf("%e", 15.3*200000);

    fflush(stdin);
    getchar();

    return 0;
}