#include <stdio.h>

void exibir_SituacaoAcademica(int frequencia, float nota){
        if (frequencia < 75 ) {
            printf("Você está reprovado\n");
        }
        else {
            if (frequencia >= 75 && nota < 6)
            {
                printf("Você está reprovado\n");
            }
            else {
                printf("Você está aprovado\n");
            }
        }
    }

int main() {
    float nota;
    int frequencia;

    printf("Coloque sua nota de 0 a 10 \n");
    scanf("%f", &nota);

    printf("Coloque sua frequência: \n");
    scanf("%d", &frequencia);
    exibir_SituacaoAcademica(frequencia, nota);
    
    return 0;
}