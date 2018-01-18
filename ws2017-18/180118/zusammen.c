#include <stdio.h>

int main() {

    int i = 5;

    i = i + 5;
    // ist das selbe wie:
    i += 5;
    i += 6;
    i *= 2;
    i |= 2;
    i = i | 2;

    i = 2;

    int tmp = i;
    i = i + 1;
    int tmp2 = i;
    i = i + 1;
    c = tmp + tmp2;
    int c = i++ + i++;

    return 0;
}