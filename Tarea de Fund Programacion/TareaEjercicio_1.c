/* Lenguaje C La Nota de 3 examenes */

#include <conio.h>
#include <stdio.h>

int main(){
    float nota1, nota2, nota3, nota_media;

    printf("\n Ingresa la primera nota: ");
    scanf("%f", &nota1);
    printf("\n Ingresa la segunda nota: ");
    scanf("%f", &nota2);
    printf("\n Ingresa la tercera nota: ");
    scanf("%f", &nota3);

    nota_media=( nota1 + nota2 + nota3 )/3;

    printf("\n La Nota media es: %.2f", nota_media);

    getch(); /* Pausa */

    return 0;
}