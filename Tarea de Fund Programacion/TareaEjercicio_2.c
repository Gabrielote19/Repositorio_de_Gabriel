/* Lenguaje: Volumen de un cubo */

#include <conio.h>
#include <math.h>
#include <stdio.h>

int main(){
    float a, v;

    printf("\n Ingresa la arista: ");
    scanf("%f", &a);

    v= pow(a,3);

    printf("\n El Volumen es: %.2f", v);

    getch(); /* Pausa */

    return 0;
}
