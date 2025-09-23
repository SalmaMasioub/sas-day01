#include <stdio.h>

int main()
{
    int a; 
    int b;

    printf("Entrer la valeur de a: ");
    scanf("%d", &a);

    printf("Entrer la valeur de b: ");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d - %d = %d\n", a, b, a-b);
   
    
    return 0;
}
