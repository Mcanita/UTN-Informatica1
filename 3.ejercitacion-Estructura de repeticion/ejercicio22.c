# include<stdio.h>

int main()
{
    int num, binario=0, cuenta=0;

    printf("ingrese un numero decimal positivo: ");
    scanf("%d",&num);

    cuenta = (num/2);
    printf("el numero en binario es : %d \n");

    while(num >=2)
         {
        cuenta = num / 2;
        binario = num %2 ;
        printf("%d", binario);
        num = cuenta;

    }









}
