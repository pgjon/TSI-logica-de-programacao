/*
    Reescreva o exercício 12.17 (união) considerando que podehaver elementos repetidos tanto no vetor A como no vetor B.  Entretanto, para o vetor U não devem ser copiados elementos repetidos.
    
    [Entrada]                           [Saída]
    7 (Q)  8 (R)
    10 12 5 12 4 4 4 (Vetor A)
    12 60 12 43 60 23 10 12 (Vetor B)
                                        10 12 5 4 60 43 23 (Vetor U)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int i, j, Q, R, vetorQ[10], vetorR[10], vetorU[20], accQ, accR, repetido, auxQ[10], auxR[10];

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

    // extraindo os repetidos do vetorQ
    accQ = 0;
    for (i = 0; i < Q; i++) {
        repetido = 0;
        for (j = 0; j < i; j++) {
            if (vetorQ[j] == vetorQ[i]) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) {
            auxQ[accQ++] = vetorQ[i];
        }
    }

    // extraindo os repetidos do vetorR
    accR = 0;
    for (i = 0; i < R; i++) {
        repetido = 0;
        for (j = 0; j < i; j++) {
            if (vetorR[j] == vetorR[i]) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) {
            auxR[accR++] = vetorR[i];
        }
    }

    // Copia todos de auxQ para U
    int accU = 0;
    for (i = 0; i < accQ; i++) {
        vetorU[accU++] = auxQ[i];
    }


    // // Para cada elemento de R, verifica se já está em Q
    for (i = 0; i < accR; i++) {
        repetido = 0;
        for (j = 0; j < accQ; j++) {
            if (auxR[i] == auxQ[j]) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) { // significa dizer que if (repetido == 0), ou seja não tem número repetido
            vetorU[accU++] = auxR[i];
        }
    }

    for (i = 0; i < accU; i++) {
        printf("%d ", vetorU[i]);
    } printf("(Vetor U)");
    printf("\n");
    return 0;
}