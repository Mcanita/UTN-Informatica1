# include<stdio.h>

int main()
{
    int i, n, factorial=0;

    printf("ingrese un numero mayor/igual a 0 y menor a 10 : \n");
    scanf("%d", &n);

    factorial =n;
    for(i=1; i<n; i++)
    {
        factorial = factorial * i;
    }
    printf("el factorial de %d es : %d",n, factorial);

}
