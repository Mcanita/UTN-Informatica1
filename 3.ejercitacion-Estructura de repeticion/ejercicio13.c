# include<stdio.h>

int main()
{
    int i, j, cont =0, cont_primos=0;

     printf("los numeros primos son : \n");

    for(i=1; i<= 100; i++)
    {
        cont=0;
       for(j=1; j<i; j++)
       {
           if(i %j ==0)
           {
               cont++;
           }



       }
         if(cont ==1)
           {
               cont_primos++;
               printf("%d \t",i);

           }

    }

    printf(" \n en total hay : %d  numeros primos", cont_primos );




}
