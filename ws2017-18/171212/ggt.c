#include <stdio.h>

int main()
{
    // Funktion zum ermitteln des größten gemeinsamen Teilers
    int x, y, h;
    printf("Gib bitte den ersten Wert ein: ");
    scanf("%d", &x);
    printf("Gib bitte den zweiten Wert ein: ");
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

    printf("%d", y);

    // DIese Zeilen halten die Konsole offen am Ende (Sonst nix)
    fflush(stdin);
    getchar();
}