#include <stdio.h>

int main()
{
    int usuario1, usuario2;
    float usuario3 = 0.00;

    printf("Primeiro usuario, Insira um valor: ");
    scanf("%d", &usuario1);

    printf("Segundo usuario, Insira um valor: ");
    scanf("%d", &usuario2);

    printf("Terceiro usuario, Insira um valor: ");
    scanf("%f", &usuario3);

    printf("Os valores informados: %d, %d, %.2f\n", usuario1, usuario2, usuario3);
    return 0;
}
