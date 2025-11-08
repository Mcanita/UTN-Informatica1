# include<stdio.h>

int main()
{
    int codigo, cant, importe, caja =0, resto = 0, descuento;

    printf("ingrese el codigo del articulo: ");
    scanf("%d", &codigo);
    printf("ingrese la contidad : ");
    scanf("%d", &cant);

    if (codigo ==1 || codigo ==10 || codigo ==100)
    {
        importe = cant * 520;
    }
    else if (codigo ==2 || codigo ==22 || codigo ==222 )
    {
        caja = cant /10;
        resto = cant %10;

        importe = (caja * 650) + (resto * 70);
    }
    else if (codigo ==3 || codigo ==33 )
    {
       if(cant >10)
       {
           descuento = (cant * 200)*0.10;
           importe = (cant * 200)- descuento;
       }
       else{
        importe = cant * 200;
       }
    }
    else if (codigo ==4 || codigo ==44 )
    {
        importe = cant * 100;
    }
    else
    {
        printf("CODIGO INCORRECTO");
    }

    printf("CODIGO: %d  CANTIDAD: %d  IMPORTE A PAGAR: %d ", codigo,cant,importe);




}
