/*
    Escreva um algoritmo para ler 2 inteiros Q (máximo 10) e R (máximo 10). A seguir ler um vetor A de Q elementos e um vetor B de R elementos. Depois ler vários códigos que indicam a forma como serão copiados para um vetor S (1.Vetor A antes de B  2.Vetor B antes de A 3.Fim). Conforme o código informado executar a cópia e escrever o vetor S após o seu término . O algoritmo termina ao ser informado o valor 3 para o código (Considere que os códigos informados são válidos).
    
    [Entrada]                            [Saída]
    4 (Q)  5 (R)
    10 12 5 4 (Vetor A)
    21 60 43 23 22 (Vetor B)
    1 (A antes de B)                     10 12 5 4 21 60 43 23 22 (Vetor S)
    2 (B antes de A)                     21 60 43 23 22 10 12 5 4 (Vetor S)
    3 (fim)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, Q, R, A[10], B[10], S[10], menu;
    // Inputs
    printf("Digite valores para (Q) e (R) entre 1 e 9\nA soma dos dois não pode ultrapassar 10.\n");
    
    printf("Digite um valor para (Q): "); scanf("%d", &Q);
    while ((Q < 1) || (Q > 9)) {
        printf("Valor inválido para Q\nQ: "); scanf("%d", &Q);
    }

    printf("Digite um valor para (R): "); scanf("%d", &R);
    while ((R < 1) || ((Q + R) > 10)) {
        printf("Valor inválido para R\nR: "); scanf("%d", &R);
    }

    // Processing
    for (i = 0; i < Q; i++) {
        printf("Digite %dº para (Q): ", i); scanf("%d", &A[i]);
    }

    for (i = 0; i < R; i++) {
        printf("Digite %dº para (R): ", i); scanf("%d", &B[i]);
    }

    while (1) {
        printf("Digite (1 - Para mostrar valores de A antes de B 2 - Para B antes de A ou 3 - para sair do programa)"); scanf("%d", &menu);
        if (menu == 3) break;

        if (menu == 1) {
            // copiano A para S
            for (i = 0; i < Q; i++) {
                S[i] = A[i];
            }
            // copiando B para S
            for (i = 0; i < R; i++) {
                S[Q + i] = B[i];
            }
        } 
        
        if (menu == 2) {
            // copiano B para S
            for (i = 0; i < R; i++) {
                S[i] = B[i];
            }
            // copiando A para S
            for (i = 0; i < Q; i++) {
                S[R + i] = A[i];
            }
        }

        for (i = 0; i < (Q + R); i++) {
            printf("%d ", S[i]);
        }
        printf("\n");
    }
    // Outputs

    return 0;
}