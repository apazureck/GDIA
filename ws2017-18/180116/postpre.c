#include <stdio.h>

int main() {
    int i = 4;
    printf("%d\n", i++); //postfix
    printf("%d\n", ++i); //prefix

    printf("%d\n", i--); //postfix
    printf("%d\n", --i); //prefix
    i++;
    i = i + 1;
    i += 1;
    fflush(stdin);
    getchar();
}