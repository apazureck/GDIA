#include <stdio.h>

int main()
{
    int x, y, h;

    // EIngabe von x
    printf("Gib x ein: ");
    scanf("%d", &x);

    // EIngabe von y
    printf("Gib y ein: ");
    scanf("%d", &y);

    while (x > 0)
    {
        if (x < y)
        {
            h = x;
            x = y;
            y = h;
        }
        x = x - y;
    }

    printf("Wurschtwas %d x ist %d, h = %d", y, x, h);

    fflush(stdin);
    getchar();
}