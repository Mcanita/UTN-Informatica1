# include<stdio.h>

int main()
{
    int i, cant=0;
    char letra;

    for(i =0; i<10; i++)
    {
        printf(" ingrese una letra: ");
        scanf(" %c", &letra);

       if(letra=='a'|| letra=='e'|| letra=='i'|| letra=='o'|| letra=='u')
        {
            cant++;
        }
    }
    printf("la cantidad de vocales ingresadas es de : %d", cant);


}
