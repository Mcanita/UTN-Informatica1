# include<stdio.h>

int main()
{

float importe, descuento = 0, pFinal;

printf("ingrese el importe de la compra : ");
scanf("%f", &importe);


if(importe < 3255)
{
    descuento = (importe * 4.5)/100;
    pFinal = importe - descuento;
}
else if(importe >= 3255 && importe < 5000)
{
     descuento = (importe * 8)/100;
    pFinal = importe - descuento;
}
else {
    descuento = (importe * 10.5)/100;
    pFinal = importe - descuento;
}

printf("EL IMPORTE ORIGINAL ES DE : %.2f \n", importe);
printf("EL DESCUENTO ES DE : %.2f \n", descuento);
printf("EL IMPORTE FINAL ES DE : %.2f \n", pFinal);


}
