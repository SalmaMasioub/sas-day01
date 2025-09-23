// Challenge 1 : Affichage Informations

#include <stdio.h>

int main() {

    char name[20];
    int age;
    char gender [10] ;
    char email[40];
   

    printf("Enter your name: ");
    scanf("%s", &name);

    printf("Enter your age: ");
    scanf("%d" , &age);

    printf("Enter your gender: ");
    scanf("%s" , &gender);
    
     printf("Enter your email: ");
    scanf("%s", &email);
    

    printf("Your name is: %s  you are %d years old your you are a %s email is : %s ", name , age , gender , email  );

    
    return 0;
}





