# include<stdio.h>

int main()
{

int num1, num2, div;

printf("ingrese NUMERO 1 : ");
scanf("%d",&num1);

printf("ingrese NUMERO 2 : ");
scanf("%d",&num2);

if(num2!=0)
    {
        div = num1 % num2;
        if(div == 0){
        printf(" El NUMERO1 es divisible por el Numero2 ");
        }
        else{
            printf("El NUMERO1 NO divisible por el Numero2 ");
        }


    }
else
    {
        printf("NO SE PUEDE DIVIDIR POR 0 ");
    }










printf("%d",div);

}
