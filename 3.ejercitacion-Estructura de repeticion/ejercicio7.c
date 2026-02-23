# include<stdio.h>

int main()
{
     int N, numero;
     int cant_multiplos_3 = 0, suma_orden_par = 0;
     int suma_mult_5_no_3 = 0, contador_mult_5_no_3 = 0;
     float promedio_mult_5_no_3 = 0.0;

    printf("Ingrese la cantidad de numeros : ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("Ingrese el numero %d: ", i);
        scanf("%d", &numero);

        if (numero % 3 == 0) {
            cant_multiplos_3++;
        }

        if (i % 2 == 0) {
            suma_orden_par += numero;
        }

        if (numero % 5 == 0 && numero % 3 != 0) {
            suma_mult_5_no_3 += numero;
            contador_mult_5_no_3++;
        }
    }

    if (contador_mult_5_no_3 > 0) {
        promedio_mult_5_no_3 = (float)suma_mult_5_no_3 / contador_mult_5_no_3;
    }

    printf(" Cantidad de valores multiplos de 3: %d\n", cant_multiplos_3);
    printf(" Suma de los valores ingresados en orden par: %d\n", suma_orden_par);

    if (contador_mult_5_no_3 > 0) {
        printf(" Promedio de los numeros multiplos de 5 pero no multiplos de 3: %.2f\n", promedio_mult_5_no_3);
    } else {
        printf(" No se ingresaron numeros multiplos de 5 pero no de 3, no se puede calcular el promedio.\n");
    }

    return 0;

}
