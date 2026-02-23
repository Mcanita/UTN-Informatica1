# include<stdio.h>

int main()
{
    //el enunciado no indica corte, lo hago ingresando <=0
    int codigo, codBarato, codCaro, con=0;
    float precio, caro, barato;

    printf("ingrese el codigo del articulo: ");
    scanf("%d", &codigo);

    while(codigo>0)
    {
        printf("ingrese el precio: ");
        scanf("%f",&precio);
        if(con==0)
        {
            caro = precio;
            barato = precio;
            con++;
        }
        else if(precio < barato)
        {
            barato = precio;
            codBarato = codigo;
        }else if(precio > caro)
        {
            caro = precio;
            codCaro = codigo;
        }

        printf("ingrese el codigo del articulo: ");
        scanf("%d", &codigo);
    }

    printf("---------------------------------\n");
    printf("el articulo mas barato es el: %d \n", codBarato);
    printf("con el precio : $%.2f\n", barato);
    printf("---------------------------------\n");
    printf("el articulo mas caro es el: %d \n", codCaro);
    printf("con el precio : $%.2f\n", caro);




}
