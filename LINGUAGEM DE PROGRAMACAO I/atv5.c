#include <stdio.h>

const float base1 = 2122.00, base2 =2122.01, base3 = 2823.66, base4 = 3721.06, base5 = 4664.68;
const float ali0 = 0.0, ali1 = 7.5, ali2 = 15.0, ali3 = 22.5, ali4 = 27.5;

int main(){
    float salario, imposto, salario_liquido;

    printf("Insira o valor do salario do funcionario: ");
    scanf("%f", &salario);

    if (salario <= base1){
        imposto = salario * (ali0/ 100);
    } else if (salario <= base2){
        imposto = salario * (ali1/ 100);
    } else if (salario <= base3){
        imposto = salario * (ali2/ 100);
    } else if (salario <= base4){
        imposto = salario * (ali3/ 100);
    } else {
        imposto = salario * (ali4/ 100);
    }
    
    salario_liquido = salario - imposto;

    printf("O salario liquido e:%.2f\n", salario_liquido);


    return 0;
}
