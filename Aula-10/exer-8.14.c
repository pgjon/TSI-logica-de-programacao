/*
    8.14) Escreva um algoritmo para ler 3 inteiros representando respectivamente a quantidade de votos recebidos por três candidatos. A seguir devem ser impressas três linhas de asteriscos, onde cada uma representa graficamente o percentual de votos que cada candidato recebeu. Após cada linha deve ser impresso o percentual de votos de cada candidato. Considere que cada asterisco representa 5%.
    
    [Entrada]                   [Saída]
    60 (votos do candidato 1)
    90 (votos do candidato 2)
    50 (votos do candidato 3)  
                                ****** 30                         
                                ********* 45
                                ***** 25
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, j, k, totalVotos, votosCandidato1, votosCandidato2, votosCandidato3;
    // Inputs
    printf("Quantidade de votos do Candidato 1: "); scanf("%d", &votosCandidato1);
    printf("Quantidade de votos do Candidato 2: "); scanf("%d", &votosCandidato2);
    printf("Quantidade de votos do Candidato 3: "); scanf("%d", &votosCandidato3);

    // Processing
    totalVotos = votosCandidato1 + votosCandidato2 + votosCandidato3;
    int porcentoCandidato1 = votosCandidato1 * 100 / totalVotos;
    int porcentoCandidato2 = votosCandidato2 * 100 / totalVotos;
    int porcentoCandidato3 = votosCandidato3 * 100 / totalVotos;

    for (i = 0; i < porcentoCandidato1; i += 5) {
        printf("*");
    } printf(" %d\n", porcentoCandidato1);

    for (j = 0; j < porcentoCandidato2; j += 5) {
        printf("*");
    } printf(" %d\n", porcentoCandidato2);

    for (k = 0; k < porcentoCandidato3; k += 5) {
        printf("*");
    } printf(" %d\n", porcentoCandidato3);
    // Outputs

    return 0;
}