# include<stdio.h>

//ejemplo con 6 alumnos
int main()
{
    int i, edad, cant1=0, cant2=0, suma_edad=0, suma_estatura=0 , edad_promedio;
    float estatura, estatura_promedio;

    for(i=0; i<6; i++)
    {
        printf("ingrese la edad : ");
        scanf("%d", &edad);
        printf("ingrese la estatura : ");
        scanf("%f", &estatura);

        if(edad > 10)
        {
            cant1++;
        }

        if(estatura< 1.40)
        {
            cant2++;
        }

        suma_edad += edad;
        suma_estatura += estatura;
    }
    edad_promedio= suma_edad / 6;
    estatura_promedio =(float)suma_estatura / 6 ;

    printf("la edad promedio es de : %d \n", edad_promedio);
    printf("la estatura promedio es de : %.2f \n", estatura_promedio);
    printf("la cantidad de alumnos mayores a 10 anios : %d \n", cant1);
    printf("cantidad de alumnos que miden menos de 1,40mt : %d \n", cant2);





}
