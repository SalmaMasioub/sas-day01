#include<stdio.h>
    int main(){

       float C ;

       printf("Entrer la temperature en Celusius:") ;
       scanf("%f",&C);

       if (C >= 0 && C < 100){
            printf("Liquide");
        }else if (C >= 100){
                printf("gaz");
        }else { 
                printf("solide");
        }


        
        return 0;

    }