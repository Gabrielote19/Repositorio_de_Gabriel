#include <stdio.h>

/* Programa que calcula el precio neto de un producto de una empresa de 
venta de recambios de automóviles */

main(){
    float precio_neto, precio_coste, margen;

    printf("Cual es el precio de coste?");
    scanf("%f", &precio_coste);

    printf("Cual es el margen?");
    scanf("%f", &margen);

    /*Proceso: calculo del precio neto */

    precio_neto=precio_coste*(100+margen)/100;

    /*Salida de Datos*/

    printf("El precio neto de este producto es de %f euros\n", precio_neto);
}