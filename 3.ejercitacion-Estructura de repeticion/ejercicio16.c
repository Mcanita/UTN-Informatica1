# include<stdio.h>

int main()
{
    float importe, efectivo=0, tarjeta=0, total =0, iva=0;
    char cod;

    printf("ingrese el importe total : ");
    scanf("%f", &importe);
    fflush(stdin);
    printf("ingrese el codigo : ");
    scanf("%c", &cod);

    while(cod != 'F')
    {
        if(cod == 'C')
        {
            importe = importe * 0.70;
        }

        if(cod == 'E')
        {
            importe = importe * 0.90;
            efectivo = importe + efectivo;
        }

        if(cod == 'T')
        {
            importe = (importe * 0.12) + importe;
            tarjeta = importe + tarjeta;
        }

        total = importe + total;
        iva = total * 0.21;




        printf("ingrese el importe total : ");
        scanf("%f", &importe);
        fflush(stdin);
        printf("ingrese el codigo : ");
        scanf("%c", &cod);

    }

     printf("---------------------------------------- \n");
     printf("EFECTIVO EN CAJA : %.2f \n", efectivo);
     printf("VENTA CON TARJETA : %.2f \n", tarjeta);
     printf("TOTAL DE VENTAS : %.2f \n", total);
     printf("importe del IVA: %.2f \n", iva);
     printf("---------------------------------------- \n");

}
