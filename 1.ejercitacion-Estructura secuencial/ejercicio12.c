# include<stdio.h>

int main()
{
    float radio, superficie, perimetro, volumen;
    int pi = 3.14;

    printf("ingrese el valor del radio: ");
    scanf("%f", &radio);

    perimetro = 2 * pi * radio;
    superficie = pi * radio *radio;

    printf("Superficie del círculo: %.2f\n", superficie);
    printf("Perimetro del círculo: %.2f\n", perimetro);




}
