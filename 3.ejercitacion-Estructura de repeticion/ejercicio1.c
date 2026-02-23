# include<stdio.h>

int main()
{
    //se achica la cantidad a 5
    int i, n , neg =0, suma =0, cant =0;
    float prom =0;

    for(i =0; i<5; i++)
    {
        printf("ingrese un numero : ");
        scanf("%d", &n);

        if(n <0)
        {
            neg ++;
        }
        else
        {
            cant ++;
            suma =suma + n;
        }

    }

    prom = (float)suma / cant;
    printf(" cantidad de numeros negativos : %d ", neg);
    printf("la suma de positivos es : %d ", suma);
    printf("el promedio de los positivos es : %.2f ", prom);

}
