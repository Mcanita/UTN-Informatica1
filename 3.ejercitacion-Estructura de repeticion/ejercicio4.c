# include<stdio.h>
// se realiza con 10 en lugar de 50

int main()
{
    int i , n, cont=0;
    float prom;

    for(i=0; i<10; i++)
    {
        printf("ingrese un numero entero: ");
        scanf("%d", &n);

        if(n %2 ==0)
        {
            cont ++;
        }
    }

    prom = (cont * 100)/10;

    printf("el promedio de numeros pares es de : %.2f", prom);




}
