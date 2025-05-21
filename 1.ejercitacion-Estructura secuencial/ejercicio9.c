# include<stdio.h>

int main()
{
    int cajas, cantidad, sueltos;
    float precio, importeSinDescuento, descuento , importeFinal;
    float importeCajas, importeSueltos;

    printf("ingrese la cantidad de alfajores : ");
    scanf("%d", &cantidad);

    printf("ingrese el precio unitario : ");
    scanf("%f", &precio);

    cajas = cantidad /12;
    sueltos = cantidad %12;

    importeSinDescuento = cantidad * precio;
    importeCajas = cajas *12 * precio;
    importeSueltos = sueltos * precio;
    descuento = importeCajas* 0.05;
    importeFinal = (importeCajas - descuento) + importeSueltos;

    printf("Importe sin descuento es : $ %.2f \n", importeSinDescuento);
    printf("Descuento : $ %.2f \n", descuento);
    printf("Importe final : $ %.2f \n", importeFinal);






}
