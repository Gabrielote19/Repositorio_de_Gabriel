#include <conio.h>
#include <stdio.h>

int main(){

    int n, i, num, contador_par, contador_impar, contador_0, contador_primos;
    printf("\n Ingrese la cantidad de numero: ");
    scanf("%d", &n);

    while(n<0);

    for (i=0 ; i<=n; i++);{
        printf("Ingrese el numero %d \n", i);
        scanf("%d", &num);
        if (num%2==0);
        {
            contador_par++;
         }
         else
         {
            contador_impar++;
        }
        }
        while (num==0);
        {
            contador_0++;
        }

        printf("\n La Cantidad de numeros pares son: %d", contador_par);
        printf("\n La Cantidad de numeros impares son: %d", contador_impar);
        printf("\n La Cantidad de 0 introducidos: %d", contador_0);
   

    return 0;
}
