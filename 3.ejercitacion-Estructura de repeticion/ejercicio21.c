# include<stdio.h>

int main()
{
    int num, primero, segundo, cont = 0;

    printf("ingrese un numero : ");
    scanf("%d", &num);

    while(num != 0)
    {
        if(cont == 0)
        {
            primero = num;
            segundo = num;
            cont ++;
        }
        if(num > primero)
        {
            segundo = primero;
            primero =num;
        }
        else
        {
            if(num > segundo)
            {
                segundo = num;
            }
        }

         printf("ingrese un numero : ");
         scanf("%d", &num);
    }

    printf("EL MAYOR ES :%d \n", primero);
    printf("EL SEGUNDO MAYOR ES : %d \n", segundo);




}
