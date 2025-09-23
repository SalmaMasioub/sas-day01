// Challenge 4 : Conversion de la vitesse

#include <stdio.h>
int main(){

float km ;
float h ;

printf (" entrer la distance en km : ");
scanf("%f" , &km);

printf (" entrer la durée en heure : ");
scanf("%f" , &h);

float m_s = km/h * 0.27778;

printf("conversion de la vitesse : %.2f m/s", m_s);

return 0;

}