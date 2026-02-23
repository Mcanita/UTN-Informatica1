# include<stdio.h>
#define participante 5
#define disparos 3

int main()
{
    int i, d , x , y,p , centro =0;
    int disparosXcuadrante[participante][4]={0};

    for (i= 0; i <participante; i++) {
        printf("\n=> Participante Nro. %d\n", i + 1);


        for (d = 0; d <disparos; d++) {
            printf("  Disparo Nro. %d (Ingrese X Y): \n", d + 1);
            scanf("%d %d", &x, &y);

            if (x == 0 && y == 0) {
                centro++;
                printf(" dio en el Centro\n");
            } else if (x > 0 && y > 0) {
                disparosXcuadrante[i][0]++;
                printf("Cuadrante I\n");
            } else if (x < 0 && y > 0) {

                disparosXcuadrante[i][1]++;
                printf("Cuadrante II\n");
            } else if (x < 0 && y < 0) {

                disparosXcuadrante[i][2]++;
                printf("Cuadrante III\n");
            } else if (x > 0 && y < 0) {

                disparosXcuadrante[i][3]++;
                printf("Cuadrante IV\n");
            } else {

                printf("Disparo sobre un eje \n");
            }
        }
    }


    for ( p = 0; p < participante; p++) {
        printf("\nParticipante Nro. %d:\n", p + 1);
        printf("  Cuadrante I:   %d\n", disparosXcuadrante[p][0]);
        printf("  Cuadrante II:  %d\n", disparosXcuadrante[p][1]);
        printf("  Cuadrante III: %d\n", disparosXcuadrante[p][2]);
        printf("  Cuadrante IV:  %d\n", disparosXcuadrante[p][3]);
    }

    printf("\n Disparos Totales al Centro : \n %d", centro);

}
