# include<stdio.h>


int main()
{
    int lado1, lado2, lado3;

    printf("ingresa 3lados para formar un triangulo: \n");
    scanf("%d" "%d" "%d", &lado1 ,&lado2 ,&lado3);

    if((lado1 + lado2 <= lado3)|| (lado1 + lado3 <= lado2)||(lado3 + lado2 <= lado1))
    {
         printf("Estos lados NO FORMAN UN TRIANGULO");
    }
    else if(lado1 == lado2 && lado1 == lado3)
    {
        printf("SE FORMA UN TRIANGULO EQUILATERO");
    }
     else if(lado1 == lado2 || lado1 == lado3 ||lado2 == lado3)
    {
        printf("SE FORMA UN TRIANGULO ISOSCELES");
    }
     else
    {
        printf("SE FORMA UN TRIANGULO ESCALENO");
    }





}
