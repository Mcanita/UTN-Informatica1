# include<stdio.h>

int main()
{
    float n1, n2, n3;
    float promedio = 0;


    printf("ingrese el primer valor: ");
    scanf("%f",&n1);
    printf("ingrese el segundo valor: ");
    scanf("%f",&n2);
    printf("ingrese el tercer valor: ");
    scanf("%f",&n3);

    promedio= (n1 + n2 + n3)/3 ;
    printf("el promedio es : %.2f\n ", promedio) ;

    if((n1+ n2 > n3)&& (n1+ n3>n2) && (n2+ n3 >1) )
    {
        printf("se forma un triangulo ");
    }
    else{
        printf("no se forma un triangulo " ) ;
    }





}
