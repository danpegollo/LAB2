#include <stdio.h>

void calculador_imc(int peso, float altura){
        float imc = peso/ (altura*altura);
        printf("O seu imc é de: %.2f\n", imc);
    }

int main() {
    float altura;
    int peso;

    printf("Coloque sua altura em metros: \n");
    scanf("%f", &altura);

    printf("Coloque seu peso em kg: \n");
    scanf("%d", &peso);
    calculador_imc(peso, altura);
    
    return 0;
}