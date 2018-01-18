#include <stdio.h>

int main()
{
    int i = 5;

    //i = i + 1
    i++;
    ++i;

    //i = i - 1
    i--;
    --i;

    // printf(..., i);
    // i = i + 1;
    printf("%d", i++);

    // i = i + 1;
    // printf(..., i);
    printf("%d", ++i);

    // i = i + 1;
    // i = i;

    int tmp = i;
    i++;
    i = tmp;

    i = i++;


    i = i++ * 3  * b++;
    // ist das selbe wie das hier:
    int tmp2 = i;
    int tmp3 = b;
    b = b + 1;
    i = i + 1;
    i = tmp2 * 3;
    int a;
    a = a + 1;

    return 0;
}