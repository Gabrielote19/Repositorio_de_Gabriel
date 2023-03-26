#include <conio.h>
#include <stdio.h>

int main(){

    int horas,minutos,segundos,total;

    printf("\n Escribe las horas: ");
    scanf("%d", &horas);
    printf("\n Escribe los minutos: ");
    scanf("%d", &minutos);
    printf("\n Escribe los segundos: ");
    scanf("%d", &segundos);

    total = horas * 3600 + minutos * 60 + segundos;

    printf( "\n   Desde las 0:0:0 horas han pasado %d segundos.", total );

    getch(); /* Pausa */

    return 0;
}