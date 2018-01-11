#include <stdio.h>

int main() {

    int dividend, divisor, rest;
    float ergebnis;
    dividend = 10;
    divisor = 7;

    ergebnis = (float)dividend / divisor;
    rest = dividend % divisor;

    printf("Ergebnis: %f Modulo: %d", ergebnis, rest);

    ergebnis = 10 / 7;
    rest = 10 % 7;

    float halbe = (dividend + 0.)/2;

    fflush(stdin);
    getchar();
    return 0;
}