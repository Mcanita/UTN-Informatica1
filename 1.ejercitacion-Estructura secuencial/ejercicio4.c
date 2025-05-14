# include<stdio.h>

int main()
{
    int numero, unidad, decena, centena;
    printf("Ingrese un número de 3 cifras: \t ");
    scanf("%d", &numero);

    unidad = numero % 10;
    decena = (numero/10) %10;
    centena = numero /100;

     printf("\n");
    printf("Centena : %d \n", centena);
    printf("Decena : %d \n", decena);
    printf("Unidad : %d \n", unidad);




}
