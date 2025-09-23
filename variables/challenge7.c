#include<stdio.h>
    int main(){
      float a; 
      float b;  
      float c;
      float sum;
      float resultat;
        printf("Entrer la valeur de a: ");
        scanf("%f", &a);

        printf("Entrer la valeur de b: ");
        scanf("%f", &b);

        printf("Entrer la valeur de c: ");
        scanf("%f", &c);

        a *= 2;
        b *= 3;
        c *= 5;

        sum = a + b + c;
        resultat = sum / 10; // c'est 2+3+5 = 10

        printf("La moyenne est: %.2f ", resultat);


        return 0;
    }