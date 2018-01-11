#include <stdio.h>

int main()
{

    // Folie 33
    int add = 2 + 3;
    int sub = 2 - 3;
    int mult = 2 * 3;
    double divi = (double)2.0 / 3.0;
    double mod = 2 % 3;

    // Folie 35
    int result = 7 + 3 * 4 / 6 - (8 + 2) / 5;

    // Folie 37
    float halbe = 1 / 2;
    float halbe_korrekt = 1.f / 2;

    // Folie 38/39

    int greaterthan = 25 > 10;
    int notgreaterthan = 10 > 25;

    int reihenfolge = 10 > 25 == 2;
    int ungleich = 5 != 10;

    // Folie 41
    int notfirst = !1 && !0;
    int and = 5 && 2;
    int or = 0 || 2;

    // Folie 43
    int onecomp = 25;
    int onecompres = ~onecomp;

    int bitwiseand = 0x5 & 0x4;
    int bitwiseor = 0x5 | 0x4;
    int bitwiseexor = 0x5 ^ 0x4;

    // Folie 45

    int shiftleft = 1;
    shiftleft = shiftleft << 1;
    shiftleft = shiftleft << 1;

    int shiftright = 0x10;
    shiftright = shiftright >> 2;

    // Folie 47

    int i = 5;
    i++;
    i++;
    i--;
    i = i - 1;
    i = i + 1;

    //Zuweisung + Operation

    // Folie 33

    int zadd = 2;
    zadd += 3;
    int zsub = 2;
    zsub -= 3;
    int zmult = 2;
    zmult *= 3;
    double zdivi = 2.0;
    zdivi *= 3.0;
    double zmod = 2;
    zmod %= 3;

    // Folie 35
    int result = 7 + 3 * 4 / 6 - (8 + 2) / 5;

    // Folie 37
    float halbe = 1 / 2;
    float halbe_korrekt = 1.f / 2;

    // Folie 38/39

    int greaterthan = 25 > 10;
    int notgreaterthan = 10 > 25;

    int reihenfolge = 10 > 25 == 2;
    int ungleich = 5 != 10;

    // Folie 41
    int notfirst = !1 && !0;
    int and = 5 && 2;
    int or = 0 || 2;

    // Folie 43
    int onecomp = 25;
    int onecompres = ~onecomp;

    int bitwiseand = 0x5 & 0x4;
    int bitwiseor = 0x5 | 0x4;
    int bitwiseexor = 0x5 ^ 0x4;

    // Folie 45

    int shiftleft = 1;
    shiftleft = shiftleft << 1;
    shiftleft = shiftleft << 1;

    int shiftright = 0x10;
    shiftright = shiftright >> 2;

    // Folie 47

    int i = 5;
    i++;
    i++;
    i--;
    i = i - 1;
    i = i + 1;

    printf("%d", i++);
    printf("%d", ++i);

    fflush(stdin);
    getchar();

    return 0;
}