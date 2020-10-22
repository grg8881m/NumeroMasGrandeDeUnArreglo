#include <stdio.h>
#include <stdlib.h>
//Escribir un programa que nos diga el número más grande de un arreglo. Utilizando arreglos e iteradores.
int main()
{
    int tamanno, mayor;
    printf("decida el tamaño del arreglo: \n");
    scanf("%i", &tamanno);
    int arreglo[tamanno];

    printf("A continuacion ingresa los valores de cada posición del arreglo: ");

    for(int i = 0; i < tamanno; i++)
    {
        printf("Ingrese un entero: ");
        scanf("%i", &arreglo[i]);
    }
    mayor = arreglo[0];
    for(int i = 1; i < tamanno; i++)
    {
    if(arreglo[i]>mayor)mayor=arreglo[i];
    }
    printf("El mayor del arreglo es: %i", mayor);


    return 0;
}
