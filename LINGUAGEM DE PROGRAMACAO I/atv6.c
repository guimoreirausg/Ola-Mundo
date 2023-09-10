#include <stdio.h>

int main(){

    int num, i = 0;
    int x = rand() % 100;  

    printf("Adivinhe o numero do computador de 1 a 100:\n ");
    
    do
    {
        printf("Qual e o numero: ");
        scanf("%d", &num);
        i++;

        if (num > x)
        {
            printf("Talvez deva tentar um numero menor\n");
        } else if (num < x)
        {
            printf("Talvez deva tentar um numero maior\n");
        } else {
            printf("Parabens! Voce acertor %d em %d tentativas.\n", num, i);
        }
        
        
    } while (num != x);
     
    return 0;

}
