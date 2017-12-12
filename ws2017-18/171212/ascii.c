#include <stdio.h>

int main(void)
{
    for (char i = 0; i < 128; i++)
    {
        printf("%d: %c\n", i, i);
    }
    fflush(stdin);
    getchar();
    return 0;
}
