#include <stdio.h>

const int CONSTANTE = 10;
float varGlobal = 20.0;

int main() {

    int varLocal = 30;
    varLocal + CONSTANTE;

    printf("%d(Dez)\n", CONSTANTE);
    printf("%.2f(vinte)\n", varGlobal);
    printf("%d(trinta)\n", varLocal);

    return 0;
}
