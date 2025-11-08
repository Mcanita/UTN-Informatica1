# include<stdio.h>

int main()
{
    int dia , mes , anio, edad;
    int dNac, mNac, aNac;

    printf("INGRESE LA FECHA ACTUAL \n");
    printf("Dia : \n");
    scanf("%d", &dia);
    printf("Mes : \n");
    scanf("%d", &mes);
    printf("Anio : \n");
    scanf("%d", &anio);

    printf("INGRESE LA FECHA DE NACIMIENTO \n");
    printf("Dia : \n");
    scanf("%d", &dNac);
    printf("Mes : \n");
    scanf("%d", &mNac);
    printf("Anio : \n");
    scanf("%d", &aNac);

    edad = anio - aNac;

    if (mes <mNac || mes == mNac && dia< dNac)
    {
        edad--;
    }

    printf("La edad actual es de : %d",edad);


}
