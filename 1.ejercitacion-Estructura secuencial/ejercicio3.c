# include<stdio.h>

int main()
{
    float nota1, nota2, promedio;

    printf("ingrese la primera nota:\n ");
    scanf("%f",&nota1);

    printf("ingrese la segunda nota:\n ");
    scanf("%f",&nota2);

    promedio = (nota1 + nota2)/2;

    printf("el promedio es : %.2f",promedio);

}
