#include <stdio.h>

int main() {
    int i = 5;
    char c = 'U';
    int sizeofreturn = sizeof(i);
    printf("sizeof has a size of %d\n", sizeof(sizeof(i)));
    printf("i has value %d and size %d\n", i, sizeofreturn);
    printf("c has value %d and represents letter %c and has size of %d", c, c, sizeof(c));

    fflush(stdin);
    getchar();
}