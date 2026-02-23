# include<stdio.h>

int main()
{
    int n, j, i, neg =0, pos =0, ceros =0;
    float prom_neg, prom_pos;

    printf ("Ingrese un valor menor/igual a 12: ");
    scanf("%d", &n);

    if(n > 12)
    {
        printf("VALOR EXCEDIDO");
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            printf("ingrese un numero real : ");
            scanf("%d", &j);

            if(j < 0)
            {
                neg++;
            }
            else if(j == 0)
            {
                ceros++;
            }
            else{
                pos++;
            }

        }
        prom_pos =(float) (pos *100)/n;
        prom_neg =(float)(neg * 100)/n;

        printf("el promedio de los positivos es : %.2f \n", prom_pos);
        printf("el promedio de los negativos es : %.2f \n", prom_neg);
        printf("la cantidad de cero es : %d \n", ceros);

    }




}
