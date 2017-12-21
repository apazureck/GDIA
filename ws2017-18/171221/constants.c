#include <stdio.h>

int main () {

    //SOnderzeichen Anführungszeichen ausgeben
    char character = '\'';
    char chararray[20] = "\n\n\n\t'4. Zeile'";
    printf("%c", character);

    //Sonderzeichen whitespaces
    printf("\nn\n\t'4. \"Zeile'");

    //Dezimalkonstanten
    printf("\n\nDezimalzahl: %d", 25);
    printf("\nDezimalzahl: %d", 251);
    printf("\nEine Oktalzahl als Dezimalzahl: %d", 025);
    printf("\nEine Hexadezimal als Dezimalzahl: %d", 0xAF33);

    // Formatierte Hexzahlen
    printf("\n\nHexzahlen: %x %X", 0xABC01234, 0xABC01234);
    printf("\n\nHexzahlen: %x %X", 522, 522);

    // Formatierte Oktalzahlen
    printf("\n\nOktalzahlen: %o", 0xABC01234);
    printf("\n\nOktalzahlen: %o", 522);
    fflush(stdin);
    getchar();
    return 0;
}