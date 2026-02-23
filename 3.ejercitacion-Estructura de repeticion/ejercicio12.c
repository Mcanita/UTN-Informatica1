# include<stdio.h>

int main()
{
    int i, n, suma =0;

    printf("ingrese un numero : ");
    scanf("%d", &n);

    for(i=1; i<n; i++)
    {
        if(n %i == 0 )
        {
            suma =suma + i;

        }
    }

    if(suma == n )
    {
        printf("%d es un numero perfecto ", n);
    }
    else{
        printf("%d NO es un numero perfecto ", n);
    }


}
