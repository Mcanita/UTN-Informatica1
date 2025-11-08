# include<stdio.h>

int main()
{
    int n1, n2, op, res;

    printf("ingrese el primer numero : ");
    scanf("%d",&n1);
    printf("ingrese el segundo numero : ");
    scanf("%d", &n2);

    printf("\n ");
    printf("Ingrese una opcion :  \n");
    printf("1 suma \n");
    printf("2 resta \n");
    printf("3 producto \n");
    printf("4 division \n");
    scanf("%d", &op);

    if(op ==1)
    {
        res = n1 + n2;
        printf("El resultado de la operacion es : %d", res);
    }
    else if( op ==2)
    {
        res = n1-n2;
        printf("El resultado de la operacion es : %d", res);
    }
    else if (op ==3)
    {
        res = n1 * n2;
        printf("El resultado de la operacion es : %d", res);
    }
    else if (op == 4)
    {
        if (n2 ==0)
        {
            printf("no se puede dividir por 0");
        }
        else if(n2>n1)
        {
            printf("no se puede dividir por un numero mayor");
        }
        else {
            res = n1/n2;
            printf("El resultado de la operacion es : %d", res);
        }
    }
    else
    {
        printf("eligio una opcion invalida");
    }








}
