# include<stdio.h>

int main()
{
    float cantidadHoras, valorHora, sueldo;

    printf("ingrese la cantidad de horas trabajadas:\n ");
    scanf("%f",&cantidadHoras);

    printf("ingrese el valor de la hora:\n ");
    scanf("%f",&valorHora);

    sueldo = (cantidadHoras * valorHora);

    printf("el sueldo a cobras es de: %.2f",sueldo);

}
