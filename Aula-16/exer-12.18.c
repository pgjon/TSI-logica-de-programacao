/*
    Escreva um algoritmo para ler 2 inteiros Q (máximo 10) e R (máximo 10). A seguir ler um vetor A de Q elementos e um vetor B de R elementos. A seguir gere um vetor I que represente a intersecção de A e B (sem deixar elementos vazios entre os valores copiados para o vetor I). Considere que os elementos de A não se repetem. Considere que os elementos de B não se repetem. Após o processamento escrever o vetor I.
    
    [Entrada]                   [Saída]
    4 (Q)  5 (R)
    10 12 4 5 (Vetor A)
    12 60 5 23 10 (Vetor B)
                                10 12 5 (Vetor I)

*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int i, j, Q, R, vetorQ[10], vetorR[10], vetorI[20], acc = 0;

    printf("Digite quantidade de elementos do vetorQ: "); scanf("%d", &Q);
    while (Q < 0 || Q > 9) {
        printf("Valor fora da faixa!\nQ tem que ser de 0 a 9: "); scanf("%d", &Q);
    }

    printf("Digite quantidade de elementos do vetorR: "); scanf("%d", &R);
    while (R < 0 || Q + R > 20) {
        printf("Valor fora da faixa!\nR não pode ser menor que 0 nem a soma de Q + R não pode ultrapassar 20.\nR: "); scanf("%d", &R);
    }

    for (i = 0; i < Q; i++) {
        printf("Digite %dº índice do vetorQ: ", (i+1)); scanf("%d", &vetorQ[i]);
    }

    printf("\n");

    for (i = 0; i < R; i++) {
        printf("Digite %dº índice do vetorR: ", (i+1)); scanf("%d", &vetorR[i]);
    }

    // Para cada elemento de R, verifica se já está em Q
    for (i = 0; i < Q; i++) {
        for (j = 0; j < R; j++) {
            if (vetorQ[i] == vetorR[j]) {
                vetorI[acc++] = vetorQ[i];
                break;
            }
        }
    }

    for (i = 0; i < acc; i++) {
        printf("%d ", vetorI[i]);
    }
    printf("\n");
    return 0;
} 