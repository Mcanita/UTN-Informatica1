# include<stdio.h>


int main()
{
    int N1, N2, resultado;

    printf("Ingrese un numero (dividendo): ");
    scanf("%d", &N1);
    printf("Ingrese un numero (divisor): ");
    scanf("%d", &N2);

    if(N2 ==0)
    {
        printf("No se puede dividir por cero");
    }
    else
    {
         resultado = N1 / N2;
         printf("El resultado de la division es : %d", resultado);
    }







}
