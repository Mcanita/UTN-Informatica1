# include<stdio.h>

int main()
{
    int mes;
    float importe, total, descuento;
    char mPago;

    printf("ingrese metodo de pago : ");
    scanf("%c", &mPago);
    printf("ingrese el mes : ");
    scanf("%d", &mes);
    printf("ingrese el importe : ");
    scanf("%f", &importe);

    if(mes ==1 || mes ==2 || mes ==3 || mes ==12 )
    {
        descuento = (importe * 10)/100;
        total = importe - descuento;
    }
    else if ( (mes ==4 && mPago =='E')|| (mes ==5 && mPago =='E') )
    {
        descuento = (importe * 5)/100;
        total = importe - descuento;
    }
    else if ( (mes ==10 && mPago =='T')|| (mes ==11 && mPago =='T'))
    {
        if(importe < 1000)
        {
            descuento = (importe * 5)/100;
            total = importe + descuento;
        }
        else{
            total = importe;
        }
    }
    else
    {
        total = importe;
    }

    printf("el total a abonar es de : %.2f ",total);




}
