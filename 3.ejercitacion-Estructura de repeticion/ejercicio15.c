# include<stdio.h>

int main()
{
    int nroFactura, cantidad, cant = 0;
    float precio,total, recaudacion =0;

    printf("ingrese el nro de factura : ");
    scanf("%d", &nroFactura);

    while(nroFactura != 0)
    {
         printf("ingrese la cantidad : ");
         scanf("%d", &cantidad);
         printf("ingrese el precio : ");
         scanf("%f", &precio);

         total = cantidad * precio;
         if (total>5000)
         {
             total = total * 0.9;
         }

         recaudacion = total + recaudacion;
         cant++;

         printf("IMPORTE : %.2f  \n\n", total);

         printf("ingrese el nro de factura : ");
         scanf("%d", &nroFactura);

    }

    printf("----------------------------------- \n");
    printf("RECAUDACION : %.2f \n", recaudacion);
    printf("CANTIDAD DE FACTURAS : %d \n", cant);
    printf("----------------------------------- \n");


}
