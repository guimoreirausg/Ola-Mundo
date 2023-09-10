#include <stdio.h>

int main(){
    int x, y, z, formula;

    printf("Insira o valor de x: ");
    scanf("%d", &x);

    printf("Insira o valor de y: ");
    scanf("%d", &y);

    printf("Insira o valor de z: ");
    scanf("%d", &z);

    formula = (x*x)+(3*y)+(x*y*z)-9;
    printf ("O resultado da formula e: %d\n", formula);

    return 0;
}
