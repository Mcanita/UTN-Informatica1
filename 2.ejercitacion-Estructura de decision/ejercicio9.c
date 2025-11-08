# include<stdio.h>

int main()
{
int num;

 printf("ingrese numero de articulo:  ");
 scanf("%d",&num);

 if(num>1200 && num<90000){

    if(num>= 12121 || num>=18081 && num>= 30012 || num>=45565 && num>= 67000 || num>=68000){
        printf("EL ARTICULO ES DEFECTUOSO");
    }
    else{
        printf("el articulo funciona correctamente ");
    }
 }
 else{
    printf(" el numero de articulo INCORRECTO ");
 }



}
