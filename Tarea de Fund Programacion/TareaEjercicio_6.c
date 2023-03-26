/* Programa: De pesetas a euros (Solución 1) */

#include <conio.h>
#include <stdio.h>

#define euro 166.386

int main()
{
    int dolares;
    float euros;

    printf( "\n   Introduzca cantidad en dolares: " );
    scanf( "%d", &dolares );

    euros = dolares / euro;

    printf( "\n   Equivalen a: %.2f euros", euros );

    getch(); /* Pausa */

    return 0;
}