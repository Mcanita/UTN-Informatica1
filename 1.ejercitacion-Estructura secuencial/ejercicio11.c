# include<stdio.h>

int main()
{
    int cantidad, cajas, sueltas, precioCajas = 882, precioUnidad = 5, importe;

    printf("ingrese la cantidad de chicles: ");
    scanf("%d", &cantidad);
    printf("\n");

    cajas = cantidad / 60;
    sueltas = cantidad % 60;

    importe = (cajas * precioCajas) + (sueltas * precioUnidad);

    printf("Cantidad de cajas compradas: %d \n", cajas);
    printf("Importe a abonar: %d", importe);
    printf("\n");




}
