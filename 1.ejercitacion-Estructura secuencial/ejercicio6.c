# include<stdio.h>

int main()
{
    int cantidad;
    float totalCompra, precio, descuento;

    printf("Ingrese el importe del producto:\n");
    scanf("%f", &precio);
    printf("Ingrese la cantidad de productos:\n");
    scanf("%d", &cantidad);

    totalCompra = precio * cantidad;
    descuento = totalCompra * 0.1;

    printf("\n");
    printf("El importe total sin descuento es de : %.2f \n" , totalCompra);
    printf("El descuento es de : %.2f \n", descuento);
    printf("El importe a abonar con descuento es de : %.2f \n" , totalCompra * 0.9);




}
