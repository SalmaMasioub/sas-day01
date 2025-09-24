#include <stdio.h>
#include <math.h>

int main(){

    float a;
    float b;
    float c;

    printf("Entrer la valeur de a: ");
    scanf("%f", &a);    

    printf("Entrer la valeur de b: ");
    scanf("%f", &b);

    printf("Entrer la valeur de c: ");
    scanf("%f", &c);

    float moyenne =  pow(a*b*c, 1.0/3.0);

    printf("La moyenne geometrique est: %.2f", moyenne);


    return 0;
}