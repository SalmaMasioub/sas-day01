#include <stdio.h>

int main()
{
int arr[100];
int taille ;
int min ;



printf("enter le nombre des elements : ");
scanf("%d" , &taille);

arr[taille];

for(int i=0 ; i<taille  ; i++){

   
    printf("Entrez l'element : ");
    scanf("%d" , &arr[i]);

      min = arr[0];
 if(arr[i]< min ){
    min = arr[i];
 }
 
 };


 printf("le minimum nombre : %d\n", min);



return 0;

}
