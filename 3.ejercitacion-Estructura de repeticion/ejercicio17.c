# include<stdio.h>

int main()
{
    float importe, descuento, neto, suma = 0, promedio = 0;
    int cont = 0;

    printf("INGRESE EL IMPORTE DE LA VENTA : ");
    scanf("%f", &importe);

    while(importe >0)
    {
        if(importe <50)
        {
            descuento = (importe *3.5)/100;
            neto = importe - descuento;
            suma = importe + suma;
            cont ++;
        }
        if (importe >=50 && importe <= 150)
        {
            neto = importe * 0.9;
            descuento = importe - neto;
            suma = importe + suma;
            cont ++;
        }
        if(importe >= 151 && importe <= 300)
        {
            neto = importe * 0.8;
            descuento = importe - neto;
            suma = importe + suma;
            cont ++;
        }
        if(importe>300)
        {
            neto = importe * 0.75;
            descuento = importe - neto;
            suma = importe + suma;
            cont ++;
        }

         printf("---------------------------------- \n");
         printf("el importe bruto es de : %.2f \n", importe);
         printf("el descuento es de : %.2f \n", descuento);
         printf("el neto a abonar es de : %.2f \n", neto);
         printf("----------------------------------\n \n");

         printf("INGRESE EL IMPORTE DE LA VENTA : ");
         scanf("%f", &importe);
    }

    promedio = suma / cont;

    printf("----------------------------------\n");
    printf("PROMEDIO DE VENTAS: %.2f \n", promedio);
    printf("----------------------------------\n");




}
