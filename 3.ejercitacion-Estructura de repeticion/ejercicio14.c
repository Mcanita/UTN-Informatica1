# include<stdio.h>

int main()
{
    int n1, n2, suma=0;

    printf("ingrese un par de numeros \n \n");
    printf("primer numero: ");
    scanf("%d", &n1);
    printf("segundo numero: ");
    scanf("%d", &n2);

   while(n1>=0 && n2>=0)
   {
       if(n1 ==0 && n2 ==0)
       {
           printf("\n ambos numeros son 0 \n");
       }
       else
       {
           suma = n1 + n2;
           printf(" la suma es  : %d \n\n", suma);
       }

       printf("ingrese un par de numeros \n \n");
       printf("primer numero: ");
       scanf("%d", &n1);
       printf("segundo numero: ");
       scanf("%d", &n2);

   }



}
