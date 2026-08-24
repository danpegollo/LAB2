#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int obter_palpite() {
    int palpite;
    printf("Tente adivinhar o número (entre 1 e 100): \n");
    scanf("%d", &palpite);
    while (palpite < 1 || palpite > 100) {
        printf("Digite um valor válido:\n");
        scanf("%d", &palpite);
    }
    return palpite;
}

void verificar_palpite(int secreto) {
    int tentativas = 0;
    int palpite;
    do {
        palpite = obter_palpite();
        tentativas++;
        if (palpite == secreto) {
            printf("Parabéns!!! Você acertou com %d\n", tentativas);
    } 
        else if (palpite < secreto) {
            printf("Você chutou muito baixo!\n");
    }
        else {
            printf("Você chutou muito alto!\n");
    }
}
    while(palpite != secreto);
}
int main() {
    srand(time(NULL));
    int numero_secreto = (rand() % 100) + 1;
    verificar_palpite(numero_secreto);
    return 0;
}