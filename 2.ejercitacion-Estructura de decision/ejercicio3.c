# include<stdio.h>

int main()
{
    int numero1, numero2, numero3;

    printf("ingresa 3 numeros: \n");
    scanf("%d" "%d" "%d", &numero1 ,&numero2 ,&numero3);

    if(numero1 == numero2 && numero1== numero3)
    {
        printf("los tres numeros SON IGUALES");
    }
    else if(numero1 >= numero2 && numero1 >= numero3)
    {
        printf("El mayor numero ingresado es %d", numero1);
    }
    else if(numero2 >= numero1 && numero2 >= numero3)
    {
        printf("El mayor numero ingresado es %d", numero2);
    }
    else
    {
         printf("El mayor numero ingresado es %d", numero3);
    }




}
