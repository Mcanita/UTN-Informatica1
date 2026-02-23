# include<stdio.h>

int main()
{
    int i, nota, dni ,aplazo =0 ;

    for (i=0; i<5; i++)
    {
        printf("ingrese el DNI: ");
        scanf("%d", &dni);
        printf("ingrese la nota: ");
        scanf("%d", &nota);

        if(nota <4)
        {
            aplazo ++;
        }
        if (nota >8)
        {
            printf("el alumno con dni : %d tiene nota mayor a 8 \n", dni);
        }
    }

    printf("cantidad de aplazados : %d", aplazo);




}
