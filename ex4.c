#include <stdio.h>


int verificar_triangulo(float a, float b, float c) {
    if (a < b + c && b < a + c && c < a + b) {
        return 1;
    } else {
        return 0;
    }
}

void apresentar_resultado(int existe) {
    if (existe == 1) {
        printf("Os lados formam um triângulo.\n");
    } else {
        printf("Não formam um triângulo.\n");
    }
}

int main() {
    float a, b, c;
    int resultado;

    printf("Digite o tamanho do lado a: \n");
    scanf("%f", &a);

    printf("Digite o tamanho do lado b: \n");
    scanf("%f", &b);

    printf("Digite o tamanho do lado c: \n");
    scanf("%f", &c);

    resultado = verificar_triangulo(a, b, c);
    apresentar_resultado(resultado);
    return 0;
}
