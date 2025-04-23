# include<stdio.h>

int main()
{
    float cantidadHoras, sueldo;
    int valorHora = 700;

    printf("ingrese la cantidad de horas trabajadas:\n ");
    scanf("%f",&cantidadHoras);

    sueldo = (cantidadHoras * valorHora);

    printf("el sueldo a cobras es de: %.2f",sueldo);

}
