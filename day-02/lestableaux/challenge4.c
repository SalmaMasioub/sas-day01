#include <stdio.h>

int main()
{
int arr[100];
int taille ;
int max ;



printf("enter le nombre des elements : ");
scanf("%d" , &taille);

arr[taille];

for(int i=0 ; i<taille  ; i++){

   
    printf("Entrez l'element : ");
    scanf("%d" , &arr[i]);

      max = arr[0];
 if(arr[i]> max ){
    max = arr[i];
 }
 
 };


 printf("le maximum nombre : %d\n", max);



return 0;

}
