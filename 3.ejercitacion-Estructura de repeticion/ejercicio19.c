# include<stdio.h>

int main()
{
    float maximo, minimo, temperatura;
    int pos =0, posMin, posMax;


    printf("ingrese la temperatura: ");
    scanf("%f", &temperatura);

    while(temperatura > -6 && temperatura <= 40)
    {
        if(pos ==0)
        {
            minimo = temperatura;
            maximo = temperatura;
            pos++;
        }
        else if(temperatura< minimo)
        {
            minimo = temperatura;
            posMin = pos;
            pos++;
        }
        else if( temperatura > maximo)
        {
            maximo = temperatura;
            posMax = pos;
            pos++;
        }
        pos++;

         printf("ingrese la temperatura: ");
         scanf("%f", &temperatura);

    }


    printf("---------------------------------------------\n");
    printf("TEMPERATURA MAXIMA : %.2f \n", maximo);
    printf("EN LA POSICION : %d \n", posMax -1);
    printf("TEMPERATURA MINIMA : %.2f \n",minimo);
    printf("EN LA POSICION : %d \n", posMin -1);
    printf("---------------------------------------------");








}
