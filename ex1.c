#include <stdio.h>

int main() {
    //i = inteiro
   //f = float 
    int i_numero1, i_numero2,i_soma, i_subtracao, i_multiplicacao;
    float f_divisao;

    printf("Coloque o valor do número 1: \n");
    scanf("%d", &i_numero1);

    printf("Coloque o valor do número 2: \n");
    scanf("%d", &i_numero2);

    i_soma = i_numero1 + i_numero2;
    i_subtracao = i_numero1 - i_numero2;
    i_multiplicacao = i_numero1 * i_numero2;
    f_divisao = i_numero1/i_numero2;

    printf("O valor da soma é: %d\n", i_soma);
    printf("O valor da subtração é: %d\n", i_subtracao);
    printf("O valor da multiplicação é: %d\n", i_multiplicacao);
    printf("O valor da divisão é de: %.2f\n", f_divisao);

    return 0;
}