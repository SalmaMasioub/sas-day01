// Challenge 3 : Conversion de la distance

#include <stdio.h>
int main(){

float km;

printf("Entrer la distance en Km: ");
scanf("%f" , &km);

float yard = km * 1093.61 ;
printf( "%.2f km est %.2f en yard" , km , yard);

return 0 ;

}