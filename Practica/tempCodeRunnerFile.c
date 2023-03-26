#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Solicitar siete numeros. Solución sin utilizar vectores
        utilizamos bucles en este caso el bucle for.
    */

    /*
        Declaracion y creacion de variables
    */
    int contador;
    int numero;
    int divisores;
    int sumaprimos = 0;
    int banderaprimo = 0;

    /* Solicitar con un bucle for los siete numeros */
    for(contador = 0 ; contador < 7 ; contador++ ) {
        printf("No. : ");
        scanf("%d",&numero);
        // Comprobar si el numero es primo o no
        // para realizar esta accion se utiliza otro bucle que
        // determina el numero de divisores del numero introducido
        banderaprimo = 0;
        for(divisores=numero-1; divisores >= 1 && banderaprimo != 1 ; divisores--) {
            // comprobar si el numero es divisible entre el divisor
            if( numero%divisores==0) {
                banderaprimo=1;
            }
        }
        // si banderaprimo ha salido del bucle con un valor 0 es que el numero es primo
        if(banderaprimo==0) {
            sumaprimos+=1;
        }
    }
    printf("\nSe han encontrado %d numeros primos.",sumaprimos);

    return 0;
}