# include<stdio.h>

int main()
{
    int n , i;

    printf("ingrese un numero mayor a 0 y menor a 10: ");
    scanf("%d", &n);

    for(i=1; i<11; i++)
    {
        printf("%d x %d = %d \n", n,i, (n*i));
    }




}
