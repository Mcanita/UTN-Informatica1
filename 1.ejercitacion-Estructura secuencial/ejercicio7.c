# include<stdio.h>

int main()
{
    int cantidadClientes, precio = 1650;
    float recaudacion;

    printf("Ingrese la cantidad de clientes:\n");
    scanf("%d", &cantidadClientes);

    recaudacion = cantidadClientes * precio;

    printf("\n");
    printf("La recaudacion con descuento es de :$ %.2f", recaudacion* 0.5);






}
