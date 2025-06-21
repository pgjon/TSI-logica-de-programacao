/*
    Escreva um algoritmo para ler 2 inteiros Q (máximo 10) e R (máximo 10). A seguir ler um vetor A de Q elementos e um vetor B de R elementos. A seguir gere um vetor D que represente a diferença A –B (sem deixar elementos vazios entre os valores copiados para o vetor D). Considere que os elementos de A não se repetem. Considere que os elementos de B não se repetem. Após o processamento escrever o vetor D.
    
    [Entrada]                   [Saída]
    6 (Q)  5 (R)
    12 60 5 23 10 15 (Vetor A)
    10 12 5 4 7 (Vetor B)
                                60 23 15 (Vetor D)

*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int i, j, Q, R, vetorQ[10], vetorR[10], vetorD[20], acc = 0, diferente;

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
        diferente = 0;
        for (j = 0; j < R; j++) {
            // para vetorQ ser diferente de vetorR os dois indices tem que ser diferente alem de j estar em sua ultima volta. por isso j == R - 1
            if ((vetorQ[i] != vetorR[j]) && (j == (R - 1))) {
                vetorD[acc++] = vetorQ[i];
            }

            if (vetorQ[i] == vetorR[j]) break;
        }
    }

    for (i = 0; i < acc; i++) {
        printf("%d ", vetorD[i]);
    }
    printf("\n");
    return 0;
} 