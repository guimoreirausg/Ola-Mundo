#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor [10], i;
    int num;
    int encontrado = 0;

    for (i = 0; i < 10; i++)
    {
        vetor[i] = rand () % 100;
    }

    printf("Verificar valor em nossa tabela de 1 a 100:\n ");

    printf("Qual e o numero: ");
    scanf("%d", &num);

    for (i = 0; i < 10; i++)
    {
        if (num == vetor[i]){
            encontrado =1;
            break;
        }
    }
    
    if (encontrado)
        {
            printf("o numero %d foi encontrado no nossso banco de dados\n", num);
        }  else {
            printf("Esse numero nao foi encontrado no nossso banco de dados\n");
        }
    printf("Valores do vetor\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}