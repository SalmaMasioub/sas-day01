// Challenge 2 : Saisie et Affichage des Éléments
#include <stdio.h>
int main(){
int arr[100];
int taille ;
int sum = 0 ;


printf("enter le nombre des elements : ");
scanf("%d" , &taille);

arr[taille];

for(int i=0 ; i<taille  ; i++){

   
    printf("Entrez l'element : ");
    scanf("%d" , &arr[i]);
    sum += arr[i]; 
    
 };

 printf("La somme totale des éléments est : %d\n", sum);



return 0;

}
