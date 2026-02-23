# include<stdio.h>

int main()
{
    int dni, i, mayor;
    float promedio, mayorP;

    for(i=0; i<10; i++)
    {
        printf("ingrese el DNI del alumno: ");
        scanf("%d",&dni);
        printf("ingrese la nota promedio: ");
        scanf("%f",&promedio);

        if(i==1)
        {
            mayor =dni;
            mayorP =promedio;
        }
        else if( mayorP < promedio)
        {
            mayorP = promedio;
            mayor = dni;
        }


    }

    printf("el alumno con dni : %d \n", mayor);
    printf("tiene la mayor nota promedio de : %.2f \n", mayorP);





}
