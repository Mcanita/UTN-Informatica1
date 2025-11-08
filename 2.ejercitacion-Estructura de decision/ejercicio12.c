# include<stdio.h>

int main()
{
    int v1, v2, v3, v4;

    printf("ingrese el 1er valor: ");
    scanf("%d", &v1);

    printf("ingrese el 2do valor: ");
    scanf("%d", &v2);

    printf("ingrese el 3er valor: ");
    scanf("%d", &v3);

    printf("ingrese el 4to valor: ");
    scanf("%d", &v4);

    if(v1< v2 && v1<v3 && v1<v4)
    {
        printf("el menor valor es : %d \n", v1);
        printf("es el primer valor ingresado ");
    }
    else if(v2< v1 && v2<v3 && v2<v4)
    {
        printf("el menor valor es : %d \n", v2);
        printf("es el segundo valor ingresado ");
    }
    else if(v3< v1 && v3<v2 && v3<v4)
    {
        printf("el menor valor es : %d \n", v3);
        printf("es el tercer valor ingresado ");
    }
    else{
        printf("el menor valor es : %d \n", v4);
        printf("es el cuarto valor ingresado ");
    }




}
