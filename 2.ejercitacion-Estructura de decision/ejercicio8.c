# include<stdio.h>

int main()
{
    float n1, n2, n3;

    printf("ingrese el primer numero: ");
    scanf("%d",&n1);
    printf("ingrese el segundo numero: ");
    scanf("%d",&n2);
    printf("ingrese el tercer numero: ");
    scanf("%d",&n3);

    if(n1>n3 && n2>n3){
        printf(" MAYORES AL TERCERO");
    }
    else if(n1==n2 && n1==n3){
        printf(" TRES IGUALES ");
    }
    else{
        printf(" ALGUNO ES MENOR ");
    }




}
