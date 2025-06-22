/*
    Reescreva o exercício 12.17 (união) considerando que podehaver elementos repetidos tanto no vetor A como no vetor B.  Entretanto, para o vetor U não devem ser copiados elementos repetidos.
    
    [Entrada]                           [Saída]
    7 (Q)  8 (R)
    10 12 5 12 4 4 4 (Vetor A)
    12 60 12 43 60 23 10 12 (Vetor B)
                                        10 12 5 4 60 43 23 (Vetor U)

    SEM VETORES AUXILIARES
*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int i, j, Q, R, vetorQ[10], vetorR[10], vetorU[20], repetido, accU;

    // lendo qtd elementos vetorQ
    printf("Digite quantidade de elementos do vetorQ: "); scanf("%d", &Q);
    while (Q < 0 || Q > 9) {
        printf("Valor fora da faixa!\nQ tem que ser de 0 a 9: "); scanf("%d", &Q);
    }
    // lendo qtd elementos vetorR
    printf("Digite quantidade de elementos do vetorR: "); scanf("%d", &R);
    while (R < 0 || Q + R > 20) {
        printf("Valor fora da faixa!\nR não pode ser menor que 0 nem a soma de Q + R não pode ultrapassar 20.\nR: "); scanf("%d", &R);
    }
    // lendo indices do vetorQ
    for (i = 0; i < Q; i++) {
        printf("Digite %dº índice do vetorQ: ", (i+1)); scanf("%d", &vetorQ[i]);
    }

    printf("\n");
    // lendo indices do vetorR
    for (i = 0; i < R; i++) {
        printf("Digite %dº índice do vetorR: ", (i+1)); scanf("%d", &vetorR[i]);
    }

    accU = 0;

    // Adiciona elementos únicos do vetorQ para vetorU
    for (i = 0; i < Q; i++) {
        repetido = 0;
        // Verifica se já apareceu antes no próprio vetorQ
        for (j = 0; j < i; j++) {
            if (vetorQ[j] == vetorQ[i]) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) {
            vetorU[accU++] = vetorQ[i];
        }
    }

    // Adiciona elementos únicos do vetorR que não estão em vetorU
    for (i = 0; i < R; i++) {
        repetido = 0;
        // Verifica se já apareceu antes no próprio vetorR
        for (j = 0; j < i; j++) {
            if (vetorR[j] == vetorR[i]) {
                repetido = 1;
                break;
            }
        }
        // Se não é repetido no vetorR, verifica se já está no vetorU
        if (!repetido) {
            for (j = 0; j < accU; j++) {
                if (vetorR[i] == vetorU[j]) {
                    repetido = 1;
                    break;
                }
            }
            // Se não está repetido nem no vetorR nem no vetorU, adiciona
            if (!repetido) {
                vetorU[accU++] = vetorR[i];
            }
        }
    }

    for (i = 0; i < accU; i++) {
        printf("%d ", vetorU[i]);
    } printf("(Vetor U)");
    printf("\n");
    return 0;
}