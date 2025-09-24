// Challenge 2 : Saisie et Affichage des Éléments
#include <stdio.h>
int main(){

int taille ;
printf("enter le nombre des elements : ");
scanf("%d" , &taille);
int arr[taille];


for(int i=0 ; i<taille  ; i++){

    printf(" entrer les elements ");
    scanf("%d" , &arr[i]);
 };


 for (int i = 0; i < taille; i++) {
        printf("%d\n", arr[i]); 
    }

return 0;

}
