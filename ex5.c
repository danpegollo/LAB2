#include <stdio.h>
#include <stdlib.h>

int obter_palpite() {
    int palpite;
    printf("Tente adivinhar o número (entre 1 e 100): \n");
    scanf("%d", &palpite);
    return palpite;
}

void verificar_palpite(int palpite, int secreto) {
    if (palpite < 1 || palpite > 100) {
        printf("Valor inválido! Você digitou um número fora do intervalo de 1 a 100.\n");
    } 
    else if (palpite == secreto) {
        printf("Parabéns!!! Você acertou!\n");
    } 
    else if (palpite < secreto) {
        printf("Você chutou muito baixo! O valor correto é %d.\n", secreto);
    } 
    else {
        printf("Você chutou muito alto! O valor correto é %d.\n", secreto);
    }
}

int main() {

    int numero_secreto = (rand() % 100) + 1;
    int palpite_usuario = obter_palpite();
    verificar_palpite(palpite_usuario, numero_secreto);

    return 0;
}