# include<stdio.h>

int main()
{
    int n =2, par, suma =0, cont =0;

    while(cont < 10)
    {
        suma += n;

        n +=2;
        cont ++;
    }

    printf("la suma de los primeros 10 numeros naturales pares es : %d", suma);

}
