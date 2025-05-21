# include<stdio.h>

int main()
{
    int cantidad, defectuosos, aceptados;

    printf("Ingrese la cantidad de plafones: ");
    scanf("%d", &cantidad);

    defectuosos = cantidad * 0.03;
    aceptados = cantidad - defectuosos;

    printf("Cantidad de plafones defectuosos: %d \n", defectuosos);
    printf("ICantidad de plafones aceptados: %d \n", aceptados);





}
