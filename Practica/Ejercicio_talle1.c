#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, numero, pares, impares, cont0, divisores, banderaprimo, sumaprimos;

    pares = 0;
    impares = 0;
    cont0 = 0;
    sumaprimos = 0;
    banderaprimo = 0;
    printf("\n Ingrese la cantidad de numeros: ");
    scanf("%d", &n);

    while (n < 0);

    for ( i=1 ; i<=n ; i++ )
    {
        printf("\n Introduzca un numero entero %d: ", i);
        scanf("%d", &numero );

        if ( numero % 2 == 0 )
            pares++;
        else
            impares++;

        if(numero==0)
            cont0++;

        banderaprimo = 0;
        for(divisores=numero-1; divisores > 1 && banderaprimo != 1 ; divisores--) {
            
            if( numero%divisores==0) {
                banderaprimo=1;
            }
        }
        if(banderaprimo==0) {
            sumaprimos+=1;
        }
        
    }
    


    printf("\n La Cantidad de numeros pares son: %d", pares);
    printf("\n La Cantidad de numeros impares son: %d", impares);
    printf("\n La Cantidad de 0 introducidos: %d", cont0);
    printf("\n Se han encontrado %d numeros primos.", sumaprimos);

    getch(); /* Pausa */

    return 0;
}
