# include<stdio.h>

int main()
{
    int numero, suma, auxiliar;

    printf("Ingrese un número entero positivo de 4 cifras: ");
    scanf("%d", &numero);

    suma = numero;

    while (suma >= 10)
    {
        auxiliar = suma;
        suma = 0;
    }

    while (auxiliar >0)
    {
        suma += auxiliar %10;
        auxiliar /= 10;
    }

    printf("La suma de los digitos es de : %d", suma);



    return 0;

}
