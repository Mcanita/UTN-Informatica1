# include<stdio.h>

int main()
{
    int valorHora, horasTrabajadas, sueldo;

    printf("El valor de la hora \n");
    scanf("%d", &valorHora);
    printf("Ingrese la cantidad de horas trabajadas \n");
    scanf("%d", &horasTrabajadas);

    if(horasTrabajadas <= 50)
    {
        sueldo = (valorHora * horasTrabajadas);
    }
    else if (horasTrabajadas > 50 && horasTrabajadas<=150)
    {
         sueldo = (valorHora * horasTrabajadas) + 6500;
    }
    else if(horasTrabajadas>150)
    {
        sueldo = (valorHora * horasTrabajadas) + 10000;
    }

     printf("El sueldo es de : %d", sueldo);

}
