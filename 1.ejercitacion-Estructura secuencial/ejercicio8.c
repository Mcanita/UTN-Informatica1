# include<stdio.h>

int main()
{
    int precio = 18000, cantidadTurista, cantidadPrimeraClase, recaudacion;

    printf("Ingrese la cantidad de pasajeros de clase turista:\n");
    scanf("%d", &cantidadTurista);
    printf("\nIngrese la cantidad de pasajeros de primera clase:\n");
    scanf("%d", &cantidadPrimeraClase);

    recaudacion = ((cantidadTurista * precio)+ (cantidadPrimeraClase *(precio + precio* 0.4) ));

    printf("\nLa recaudacion total es de : $ %d",recaudacion );








}
